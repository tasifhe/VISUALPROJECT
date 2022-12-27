#include<iostream>

using namespace std;

int main()
{
    long long int a,b;
    while (cin>>a>>b)
    {
        cout<< max(a,b) - min(a,b) <<endl;
    }
    return 0;
}