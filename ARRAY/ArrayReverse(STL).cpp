//*Array Reversal(STL)
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[101],n;
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Enter elements of the array: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    reverse(arr,arr+n);
    cout<<"Reversed Array: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}