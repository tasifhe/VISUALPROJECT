#include<iostream>

using namespace std;

int main()
{
    int X,H,T;
    cin>>T;
    for (int i = 0; i < T; i++)
    {
        cin>>X>>H;
        if (X>=H)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}