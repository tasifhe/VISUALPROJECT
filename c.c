#include<stdio.h>

int main()
{
    int n=0;

    for(;;)
    {
        if (n>=55)break;
        n+=n++;
        printf("%d ", n);
    }
    return 0;
}