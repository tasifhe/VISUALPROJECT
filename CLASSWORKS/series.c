#include<stdio.h>
#include<conio.h>
//2+4+6+8+.....+n
int main()
{
    int s,i,n;
    s=0,i=2;
    printf("Enter the last number: ");
    scanf("%d", &n);
    while (i<=n)
    {
        s=s+i;
        i+=2;
    }
    printf("The result: %d",s);
    getch();
    return 0;
}