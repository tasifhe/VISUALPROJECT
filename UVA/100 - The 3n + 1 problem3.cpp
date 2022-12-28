#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,ans,sum;
    while (scanf("%d %d", &a, &b) == 2 &&a>0 &&a>0)
    {
        sum=0;
        cout<<a<<b;
        if(a>b)
        {
            c=b;
            b=a;
            a=c;
        }
    }
    for(int i=a;i<=b;i++)
    {
        ans=1;
        for(int j=i;j!=1;j=j)
        {
            if(j%2==0)
            {
                j/=2;
            }
            else
            {
                j=3*j+1;
                ans+=1;
            }
            if(ans>=sum)
            sum=ans;
        }
        cout<<sum<<endl;
    }
    return 0;
}