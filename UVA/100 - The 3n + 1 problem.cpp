#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b;
    while(scanf("%lld %lld",&a,&b) == 2 && a>0 && b>0)
    {
        int ans, sum=0;
        cout<<a<<" "<<b<<" ";
        if(a>b)
            swap(a,b);
        for(int i=a;i<=b;i++)
        {
            ans=1;
            for(int j=1;j!=1;j=j)
            {
                if(j%2==0)
                    j/=2;
                else
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