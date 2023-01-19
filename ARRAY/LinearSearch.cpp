//*SequentialSearch//LinearSearch
#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[],int n,int x)
{
    for (int i = 0; i < n; i++) {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int main()
{
    int arr[101],n,x;
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Enter elements of the array: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter the element to be searched: ";
    cin>>x;
    int result = LinearSearch(arr,n,x);
    if(result == -1)
        cout<<"Element not found";
    else
        cout<<"Element found at index "<<result;
    return 0;
}