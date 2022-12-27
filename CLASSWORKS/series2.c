#include<stdio.h>
#include<conio.h>
#include<math.h>
//2^2+4^2+8^2+.....n^2
int main()
{
    int s,i,k;
    printf("Enter the last number: ");
    scanf("%d", &k);
    s=0;i=2;
    while (i<=k)
    {
        s+=pow(i,2);
        i+=2;
    }
    printf("The result is: %d", s);
    getch();
    return 0;
}