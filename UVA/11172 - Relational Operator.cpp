#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long a,b;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b;
        if(a<b)
            cout<<"<\n";
        if(a>b)
            cout<<">\n";
        if(a==b)
            cout<<"=\n";
    }
    return 0;
}