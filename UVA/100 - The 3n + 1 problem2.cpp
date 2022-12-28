#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while ((cin>>a>>b))
    {
        int a1=a;
        int b1=b;

        if(a>b)
        swap(a,b);

        int ans=0, count;
        while (a<=b)
        {
            count=1;
            unsigned int n=a;
            while (n!=1)
            {
                if(n%2 == 1)
                {
                    n=3*n+1;
                }
                else
                {
                    n/=2;
                    count++;
                }
            }
            if(count>ans)
            ans=count;
            a++;
        }
        cout<<a1<<"  "<<b1<<"  "<<ans<<endl;
    }
    return 0;
}