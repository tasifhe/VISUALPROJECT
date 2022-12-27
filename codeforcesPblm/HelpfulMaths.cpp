#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int a[100];
    string s;
    cin>>s;
    int count = 0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == '+')
        {
            continue;
        }
        else
        {
            a[count++] = s[i] - '0';
        }
    }
    sort(a,a+count);
    for(int i=0;i<count;i++)
    {
        cout<<a[i];
        if(i==count-1)
        {
            break;
        }
        cout<<"+";
    }
    return 0;
}