//Print only odd values
#include<iostream>
using namespace std;

int main()
{
    int n,a[101];
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Ente array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The elemetns are: ";
    for(int i=0;i<n;i++)
    {
        if(a[i]&1)
        {
            cout<<a[i]<<" ";
        }
    }
    cout<<"\nDONE"<<endl;
    system("Color A0");
    return 0;
}