#include <iostream>

// Function to find the maximum element in an array
int FindMaximumElement(int arr[], int n) {
    if (n <= 0) {
        // Handle the case where the array is empty or has invalid size
        std::cerr << "Array is empty or has an invalid size." << std::endl;
        return INT_MIN; // Return a minimum integer value as an error indicator
    }

    int max = arr[0]; // Initialize max to the first element

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int arr[] = {12, 45, 7, 89, 34, 56};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maximumElement = FindMaximumElement(arr, n);

    if (maximumElement != INT_MIN) {
        std::cout << "The maximum element in the array is: " << maximumElement << std::endl;
    }

    return 0;
}
