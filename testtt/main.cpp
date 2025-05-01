#include <iostream>

void reverseArray(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        // Swap elements
        std::swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main() {
    const int MAX_SIZE = 100; // Maximum size of the array
    int arr[MAX_SIZE];
    int size;

    // Ask the user for the number of elements
    std::cout << "Enter the number of elements in the array (max " << MAX_SIZE << "): ";
    std::cin >> size;

    // Validate size
    if (size <= 0 || size > MAX_SIZE) {
        std::cout << "Invalid size. Please enter a number between 1 and " << MAX_SIZE << "." << std::endl;
        return 1; // Exit the program with an error code
    }

    // Input elements from the user
    std::cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    // Reverse the array
    reverseArray(arr, size);

    // Output the reversed array
    std::cout << "Reversed Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
