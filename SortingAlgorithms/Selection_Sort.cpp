#include <iostream>

// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;

        // Find the index of the minimum element in the unsorted part
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        std::swap(arr[i], arr[minIndex]);
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

    // Perform Selection Sort
    selectionSort(arr, n);

    // Display the sorted array
    std::cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
