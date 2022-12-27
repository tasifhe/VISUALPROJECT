#include<bits/stdc++.h>

using namespace std;

int main()
{
    int L,B,count=0;
    cin>>L>>B;
    if(L>B)
        count=0;
    else
        while (L<=B)
        {
            L=L*3;
            B=B*2;
            count++;
        }
    cout<<count<<endl;
    return 0;
}