#include <iostream>

// Function to perform Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }

        arr[j + 1] = key;
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

    // Perform Insertion Sort
    insertionSort(arr, n);

    // Display the sorted array
    std::cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
