#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int a, b, ca = 1;
    freopen("input.txt", "r", stdin);
    while (scanf("%d %d", &a, &b), a||b)
    {
        printf("Case %d: %d\n\n", ca++, a+b);
    }
    return 0;
}