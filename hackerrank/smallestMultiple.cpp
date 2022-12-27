#include<bits/stdc++.h>

using namespace std;

long long lcm[100];

long long gcd(long long a, long long b)
{
    return b==0 ? a: gcd(b,a%b);
}

int main()
{
    lcm[1] = 1;
    for(int i=2;i<100;++i)
        lcm[i] = i*lcm[i-1]/gcd(i,lcm[i-1]);
    
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        cout<<lcm[n];
    }
    return 0;
}