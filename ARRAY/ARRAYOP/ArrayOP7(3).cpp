#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the shift index: ";
    int shift_index;
    cin >> shift_index;

    // Assign the last element to the value of the element at the shift index
    arr[size - 1] = arr[shift_index];

    // Shift the elements to the left starting from the shift index
    for (int i = shift_index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    cout << "The shifted array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}