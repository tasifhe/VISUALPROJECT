#include<iostream>
#include<math.h>
//2^n/n!
using namespace std;

int factorial(int n);
int power(int n);

int main()
{
    int result,n,p;
    float div;
    cout<<"Enter the value of n: ";
    cin>>n;
    result=factorial(n);
    p=power(n);
    div=(float)p / (float)result;
    cout<<div<<endl;
}

int factorial(int n)
{
    int result=1;
    while(n--)
    {
        result*=n+1;
    }
    return result;
}

int power(int n)
{
    int p;
    p=pow(2,n);
    return p;
}