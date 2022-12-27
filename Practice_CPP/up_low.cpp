#include<bits/stdc++.h>

using namespace std;

int main()
{
    char c;
    while (scanf("%c", &c) == 1)
    {
        if(c >= 65 && c<= 90)
        printf("%c", c+32);
        else
        printf("%c",c);
    }
    return 0;
}