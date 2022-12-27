#include<stdio.h>

int main()
{
    int a,b,max,lcm;
    scanf("%d %d", &a, &b);
    max= (a>b) ? a:b;
    lcm=0;
    while (1)
    {
        if (max%a==0 && max%b==0)
        {
            printf("LCM is: %d", max);
            break;
        }
        max++;
    }
    return 0;
}