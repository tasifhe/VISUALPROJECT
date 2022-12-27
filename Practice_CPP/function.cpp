#include<iostream>

using namespace std;

int func(int x, int y);

int main()
{
    int a,b,la;
    cin>>a>>b;
    la = func(a,b);
    cout<<la<<endl;
    return 0;
}
int func(int x, int y)
{
    int z;
    z = x+y;
    return z;
}