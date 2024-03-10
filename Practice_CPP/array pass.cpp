#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<"Index: "<< i << " "<<arr[i]<<endl;
    }
    return 0;
}