//Array left shift from a particular index
#include<iostream>
using namespace std;


void leftShift(int arr[], int n, int index)
{
    for(int i=index; i<n-1; i++)
    {
        arr[i] = arr[i+1];
    }
}
int main()
{
    int arr[100], n, index;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the index from where you want to left shift the array: ";
    cin>>index;
    leftShift(arr, n, index);
    cout<<"The array after left shift is: ";
    for(int i=0; i<n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}