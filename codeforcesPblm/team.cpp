#include<iostream>

using namespace std;

int main()
{
    int n,P,V,T,num(0);
    cin>>n;
    while (n--)
    {
        cin>>P>>V>>T;
        if(P+V+T>=2)
        {
            num+=1;
        }
    }
    cout<<num<<endl;
    return 0;
}