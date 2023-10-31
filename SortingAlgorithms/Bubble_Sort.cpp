#include <iostream>

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            // Swap if the element found is greater
            // than the next element
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Function to print an array
void printArray(const int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int n;

    // Get the size of the array
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int arr[n];

    // Get array elements from the user
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    // Perform Bubble Sort
    bubbleSort(arr, n);

    // Display the sorted array
    std::cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
