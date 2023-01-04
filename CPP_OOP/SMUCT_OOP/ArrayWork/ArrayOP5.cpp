//Left shift by one index
#include<iostream>
using namespace std;

int main()
{
    int a[101],n,temp;
    cout<<"Enter the array size: ";
    cin>>n;
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    temp=a[0];
    for(int i=1;i<=n-1;i++)
    {
        a[i-1]=a[i];
    }
    a[n-1]=temp;
    cout<<"The modified array elements are: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nDONE"<<endl;
    system("Color A0");
    return 0;
}