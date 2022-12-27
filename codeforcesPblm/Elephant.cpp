#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m=0;
    cin>>n;
    m=n/5;
    if(n%5 != 0)
    {
        m+=1;
    }
    cout<<m<<endl;
    return 0;
}