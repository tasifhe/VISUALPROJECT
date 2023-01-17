#include<iostream>
using namespace std;

class Equation{
    public:
    int sum(int a, int b)
    {
        int sum;
        sum=a+b;
    }
};

int main()
{
    Equation Eq;
    int a,b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    Eq.sum(a,b);
    cout<<Eq.sum(a,b);
}