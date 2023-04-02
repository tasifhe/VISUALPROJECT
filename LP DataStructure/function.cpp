#include<iostream>

using namespace std;

int jog(int a, int b)
{
    int s = a+b;
    return s;
}

int biyog(int a, int b)
{
    int m1 = a-b;
    return m1;
}

float vag(float a, float b)
{
    float d = a/b;
    return d;
}

int gun(int a,int b)
{
    int g = a*b;
    return g;
}

int main()
{
    int a,b;
    cout<<"Enter two values: ";
    cin>>a>>b;
    cout<<"Jogfol: "<<jog(a,b)<<endl;
    cout<<"biyogfol: "<<biyog(a,b)<<endl;
    cout<<"vagfol: "<<vag(a,b)<<endl;
    cout<<"gunfol: "<<gun(a,b)<<endl;
    return 0;
}