#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int n,l,i;
    scanf("%d", &n);
    char sg[100];
    for(i=0;i<n;i++)
    {
        scanf("%s", &sg);
        l=strlen(sg);
        if (l>10)
        {
            printf("%c%d%c", sg[0],l-2,sg[l-1]);
        }
        else
        {
            printf("%s",sg);
            printf("\n");
        }
    }
    return 0;
}