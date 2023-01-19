//Solved by Tasif Hossain Emon
 //Student of SMUCT //BATCH 29th //ID:221071042
//*Right shift from a particular index
#include <iostream>

using namespace std;

void right_shift(int arr[], int size, int shift_index)
{
    for (int i = size - 1; i > shift_index; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[shift_index] = 0;
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
    
    right_shift(arr, size, shift_index);
    
    cout << "The shifted array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}