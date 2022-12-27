#include<iostream>

using namespace std;

class Array
{
    public:
    void arr(int n)
    {
        int N[n];
        for (int i = 0; i < n; i++)
        {
            cin>>N[i];
        }
        for(int i=0; i<n; i++)
        {
            cout<<N[i]<<" ";
        }
    }
};

int main()
{
    int n;
    cin>>n;

    Array A;
    A.arr(n);

    return 0;
}