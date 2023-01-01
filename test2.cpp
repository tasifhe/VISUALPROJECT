#include <iostream>

using namespace std;

// Left shift the elements of the array from the given index
void left_shift(int arr[], int size, int shift_index) {
    for (int i = shift_index; i < size - 1; i++) {
        arr[i] = arr[i+1];
    }
    arr[size - 1] = 0;  // or whatever value you want to use as a placeholder
}

int main() {
    // Read the array from the user
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Read the shift index from the user
    cout << "Enter the shift index: ";
    int shift_index;
    cin >> shift_index;

    // Shift the array
    left_shift(arr, size, shift_index);

    // Print the shifted array
    cout << "The shifted array is: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
