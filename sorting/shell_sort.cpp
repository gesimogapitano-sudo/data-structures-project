// Shell Sort Algorithm in C++

#include <iostream>

int main() {

    int arr[] = {89, 2, 67, 37, 72, 17, 4};

    int n = sizeof(arr) / sizeof(arr[0]);

    // Shell Sort
    for (int gap = n / 2; gap > 0; gap /= 2) {

        for (int i = gap; i < n; i++) {

            for (int j = i; j >= gap; j -= gap) {

                if (arr[j] < arr[j - gap]) {

                    int temp = arr[j];
                    arr[j] = arr[j - gap];
                    arr[j - gap] = temp;
                }
            }
        }
    }

    // Print sorted array
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << (i + 1 == n ? '\n' : ' ');
    }

    return 0;
}