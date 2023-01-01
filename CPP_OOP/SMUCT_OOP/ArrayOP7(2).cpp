//*Left shift from a particular index
#include <iostream>

using namespace std;

void left_shift(int arr[], int size, int shift_index)
{
    for (int i = shift_index; i < size - 1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[size - 1] = 0;
}

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
    
    left_shift(arr, size, shift_index);
    
    cout << "The shifted array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    system("Color A0");
    return 0;
}
