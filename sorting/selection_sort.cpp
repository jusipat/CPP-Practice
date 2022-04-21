#include <iostream>
#include <algorithm>

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selection_sort(int n, int arr[]) {
    int min;
    int i;
    int j;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(&arr[min], &arr[i]);
    }
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " " << "\n";
    }
}

int main() {
    int arr[] = {100, 463, 25, 33, 68, 254, 63, 346, 199};
    int n = sizeof(arr) / sizeof(arr[0]);
    selection_sort(n, arr);
    print_array(arr, n);
    return 0;
}
