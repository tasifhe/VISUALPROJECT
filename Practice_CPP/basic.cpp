#include<iostream>
using namespace std;

int main()
{
    int i,n,a[101];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    return 0;
}