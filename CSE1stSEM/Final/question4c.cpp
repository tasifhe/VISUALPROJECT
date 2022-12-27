#include <iostream>
//1+2+4+7+11+........+n
using namespace std;

int main()
{
    int n,i,a1,a2,m,sum;
    cout<<"Enter the value of n\n";
    cin>>n;
    a1=1;
    a2=3;
    m=a1+a2;
    sum=m;

    while(a2!=n)
    {
        a1=a2;
        a2=m;
        m=a1+a2;
        sum+=a2;

    }

    cout<<"Answer="<<sum;

    return 0;

}