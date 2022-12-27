#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,cap(0),max(0);
    cin>>n;
    while (n--)
    {
        cin>>a>>b;
        cap-=a;
        cap+=b;
        if(cap>max)
        {
            max=cap;
        }
    }
    cout<<max<<endl;
    return 0;
}