#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int a;
    // float b;
    // char c;
    // bool d;
    // double e;
    // cout<<"Size of int is "<<sizeof(a)<<endl;
    // cout<<"Size of float is "<<sizeof(b)<<endl;
    // cout<<"Size of char is "<<sizeof(c)<<endl;
    // cout<<"Size of bool is "<<sizeof(d)<<endl;
    // cout<<"Size of double is "<<sizeof(e)<<endl;

    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=1;j--)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}