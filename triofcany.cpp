#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
    int a, j, k, sum;
    cin >> a >> j >> k;
    sum= a+j+k;
    if (sum%6==0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}