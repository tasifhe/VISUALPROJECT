#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    int a=s.length();
    int count=0;
    for(int i=0;i<a;i++)
    {
        if(s[i]!=s[i-1])
            count++;
    }

    if (count&1)
    {
        cout<<"IGNORE HIM!";
    }
    else
    {
        cout<<"CHAT WITH HER!";
    }
    return 0;
}