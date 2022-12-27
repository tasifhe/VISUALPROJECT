#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,d,n;
    char c;
    while (cin>>n)
    {
        a=0;
        d=0;
        for(int i=1;i<=n;i++)
        {
            cin>>c;
            if(c=='A')
            {
                a+=1;
            }
            else
            {
                d+=1;
            }
        }
        if(a>d)
        {
            cout<<"Anton"<<endl;
        }
        else if(d>a)
        {
            cout<<"Danik"<<endl;
        }
        else
        cout<<"Friendship"<<endl;
    }
    return 0;
}