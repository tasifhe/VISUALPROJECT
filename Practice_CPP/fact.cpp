#include<iostream>
using namespace std;

int factorial(int n);

int main()
{
    int count,n;
    cout<<"Enter the value of n: ";
    cin>>n;
    count=factorial(n);
    cout<<"The result is: "<<endl<<"mara kha"<<endl;
    cout<<count;
}

int factorial(int n)
{
    int count =1;
    while (n--)
    {
        count*=n+1;
    }
    return count;
}