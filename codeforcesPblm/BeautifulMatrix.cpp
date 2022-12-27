#include<iostream>

using namespace std;

int main()
{
    int n = 0;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>n;
            if (n == 1)
            {
                cout<<abs(i-3) + abs(j-3)<<endl;
                //abs(2-i) + abs(j-2);
            }
        }
    }
    return 0;
}