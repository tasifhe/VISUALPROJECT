#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int p;
    cin>>n;
    int a[n];

    for(int i=1;i<n+1;i++)
    {
        cin>>p;
        a[p-1]=i;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}