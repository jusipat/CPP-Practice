#include <iostream>

int arr[] = {80, 68, 100, 53, 3533, 6239, 12, 11, 35, 355};
int n = sizeof(arr) / sizeof(arr[0]);

void printArray() {
    for (int i = 0; i <= n - 1; i++) {
        std::cout << arr[i] << " " << "\n";
    }
}

void bubble_sort() {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    bubble_sort();
    printArray();
}
