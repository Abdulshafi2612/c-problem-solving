#include <iostream>
#include <sstream>
using namespace std;

void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        swap(arr[i], arr[size - 1 - i]);
    }
}

void parseInput(const string& input, int arr[], int& size) {
    string cleaned_input = input.substr(1, input.size() - 2); // Remove the square brackets
    stringstream ss(cleaned_input);
    string token;
    size = 0;

    while (getline(ss, token, ',')) {
        arr[size++] = stoi(token);
    }
}

void printArray(int arr[], int size) {
    cout << "[";
    for (int i = 0; i < size; ++i) {
        cout << arr[i];
        if (i != size - 1) {
            cout << ", ";
        }
    }
    cout << "]";
}

int main() {
    const int MAX_SIZE = 100; // Maximum size for the array
    int arr[MAX_SIZE];
    int size = 0;

    string input;
    getline(cin, input);

    parseInput(input, arr, size);
    reverseArray(arr, size);

    cout << "Reversed Array: ";
    printArray(arr, size);
    cout << endl;

    return 0;
}
