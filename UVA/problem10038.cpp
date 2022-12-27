#include<cstdio>
#include<cmath>
#include<algorithm>
//#include<bits/stdc++.h>
using namespace std;

int n;
int ar[3100], arr[3100];

bool jolly()
{
    for(int i = 0; i < n-1; i++)
        arr[i] = abs(ar[i + 1] - ar[i]);
    sort(arr, arr + n-1);
    for(int i = 0; i < n-1; i++)
        if (arr[i] != i +1 )
        {
            printf("Not Jolly\n");
            return false;
        }
    printf("Jolly\n");
    return true;
}

int main()
{
    while (scanf("%d", &n) == 1)
    {
        for(int i=0; i < n; i++)
            scanf("%d", &ar[i]);
        jolly();
    }
}