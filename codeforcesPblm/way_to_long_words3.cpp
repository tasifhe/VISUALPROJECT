#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    char x[6000];
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        scanf("%s", &x);
        int len=strlen(x);
        if(len>10)
        {
            printf("%c", x[0]);
            printf("%d", len-2);
            printf("%c\n", x[len-1]);
        }
        else
        printf("%s\n", x);
    }
    return 0;
}
