#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=1;
    string s, temp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(i==0)
        {
            temp=s;
            continue;
        }
        else
        {
            if(s!=temp)
            {
                count++;
            }
            temp=s;
        }
    }
    cout<<count;
    return 0;
}