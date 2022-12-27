#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j;
    string s1,s2;
    cin>>s1>>s2;
    int l1=s1.length();
    int l2=s2.length();
    for(i=0,j=l2-1;i<l1,j>=0;i++,j--)
    {
        if(s1[i] != s2[j])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}