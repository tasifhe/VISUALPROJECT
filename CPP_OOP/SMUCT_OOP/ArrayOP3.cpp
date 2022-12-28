//Print only odd values
#include<iostream>
using namespace std;

int main()
{
    int n,a[101];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]&1)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}