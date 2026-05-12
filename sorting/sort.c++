
// Bubble Sort Algorithm in C++

#include <iostream>

int main() {
    int arr[] = {89, 2, 67, 37, 72, 17, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j + 1] < arr[j]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << (i + 1 == n ? '\n' : ' ');
    }

    return 0;
}