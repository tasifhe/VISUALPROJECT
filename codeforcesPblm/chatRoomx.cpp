#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1;
    cin>>s1;
    int count = 0;
    int l = s1.length();
    char s2[] = {'h', 'e', 'l', 'l', 'o'};

    for(int i=0; i<l; i++)
    {
        if(s1[i] == s2[i])
        {
            count++;
        }
    }
    if(count==5)
    {
        cout<<"YES";
    }
    else{
        cout << "NO";
    }
return 0;

}