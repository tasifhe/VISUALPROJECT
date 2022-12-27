#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s,s2;
    cin>>s;
    int a=s.length();
    for(int i=0;i<a;i++)
    {
        if(s[i]=='a' || s[i]=='o' || s[i]=='y' || s[i]=='e' || s[i]=='u' || s[i]=='i' || s[i]=='A' || s[i]=='O' || s[i]=='Y' || s[i]=='E' || s[i]=='U' || s[i]=='I')
        {
            continue;
        }
        else
        {
            s2 += '.';
            s2 += towlower(s[i]);
        }
    }
    cout<<s2<<endl;
    return 0;
}