#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long r,c,n,cas,k,root,diff;
    scanf("%lld", &cas);
    for (k = 1; i <= cas; k++)
    {
        scanf("%lld", &n);
        root = sqrt(n);
        diff=n-root*root;
        if (diff==0)
        {
            if (root%2==0)
            {
                r=1;
                c=root;
            }
            
        }
        else
        {
            c=1;
            r=root;
        }
        else if(diff>root)
        {
            if (root%2==0)
            {
                r=root+1;
                c=root+1-(diff-root-1);
            }
            else
            {
                r=root+1-(diff-root-1);
                c=root+1;
            }
            
        }
        else
        {
            if (root%2==0)
            {
                r=n-root*root;
                c=root+1;
            }
            
        }
        
    }
    printf("Case %lld: %lld %lld\n", k,c,r);
    return 0;
}