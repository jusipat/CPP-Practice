#include<vector>
#include<iostream>
#include<string>
#include <algorithm>

using namespace std;
string input;
int index;
vector<string> users(1, "me");
vector<string> passwords(1, "123");

bool logged_out = true;

void getPassword() {
    bool attempting = true;

    while (attempting) {
        for (int i = 0; i < users.size(); i++) {
            if (input == users[i])
                index = i;
        }
        printf("%s", "Input password: ");
        cin >> input;
        if (input == passwords[index]) {
            printf("%s", "Welcome user!");
            attempting = false;
        } else {
            printf("%s", "\nIncorrect Password... Retry\n");
        }
    }
}

int main() {
    printf("%s", "Input Username: ");
    cin >> input;

    while (logged_out) {
        if (find(users.begin(), users.end(), input) != users.end()) {
            getPassword();
            logged_out = false;
        } else {
            printf("No user registered under the name: %s", input.c_str());
            printf("%s", "\nWould you like to register a new account? \n");
            cin >> input;
            if (input == "yes") {
                printf("%s", "Input name: ");
                cin >> input;
                users.push_back(input);

                printf("%s", "Input password: ");
                cin >> input;
                passwords.push_back(input);
                index += 1;
                logged_out = false;
                continue;
            } else {
                logged_out = true;
            }
        }
    }
    printf("You are now logged in as: %s", users[index].c_str());
}