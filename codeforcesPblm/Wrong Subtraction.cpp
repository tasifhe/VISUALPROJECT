#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n=0,a,b,i;
    cin>>n>>a;
    for(i=1;i<=a;i++)
    {
        b=n%10;
        if(b==0)
        {
            n/=10;
        }
        else
            n-=1;
    }
    cout<<n<<endl;
    return 0;
}