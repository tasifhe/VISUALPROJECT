#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h, c1=0, c2 =0;
    cin>>n>>h;
    int r[n];
    for(int i=0; i<n;i++)
    {
        cin>>r[i];
        if(r[i]<=h)
        {
            c1++;
        }
        else
        {
            c2+=2;
        }
    }
    cout<<c1+c2;
    return 0;
}