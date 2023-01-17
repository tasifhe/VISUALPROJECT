//*SequentialSearch
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,array[101];
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<"The elements of the array are: ";
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}