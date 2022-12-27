#include<iostream>

using namespace std;

int main()
{
    char op;
    float n1,n2;
    
    cin>>n1>>op>>n2;

    switch (op)
    {
        case '+':
        cout<<n1<<"+"<<n2<<"="<<n1+n2;
        break;

        case '-':
        cout<<n1<<"-"<<n2<<"="<<n1-n2;
        break;

        case '*':
        cout<<n1<<"*"<<n2<<"="<<n1*n2;
        break;

        case '/':
        cout<<n1<<"/"<<n2<<"="<<n1/n2;
        break;

        default:
        cout<<"Error!";
        break;
    }
    return 0;
}