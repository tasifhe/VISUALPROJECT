#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter your ID: ";
    cin>>n;
    while (n!=0)
    {
        sum+=n%10;
        n/=10;
    }
    cout<<"The sum of the ID is: "<<sum;
}