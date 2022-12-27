#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b,c,d,x;
    cout<<"Enter four values: ";
    cin>>a>>b>>c>>d;
    
    if (a>b || a>d)
    {
        c = pow(a,2) + pow(b,2);
        cout<<c<<endl;
    }
    else if (a>c && a>d && a>b)
    {
        x = pow(c,2) + pow(a,2) + a/2;
        cout<< x<< endl;
    }
    else if (d>c || d>b)
    {
        x = pow(c,3)* sqrt(a) + b/2;
        cout<< x<< endl;
    }
    else
    {
        cout<<"wrong input";
    }
    system("pause>0");
}