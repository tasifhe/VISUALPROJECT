#include<stdio.h>
#include<conio.h>
#include<math.h>
//can calculate up to factorial of 65
// int main()
// {   
//     int num;
//     unsigned long long fact = 1;
//     printf("Enter the integer: ");
//     scanf("%d", &num);
//     while (num--)
//     {
//         fact *= num+1;
//     }
//     printf("Factorial is: %llu",fact);
//     getch();
//     return 0;
// }

//can calculate up to factorial of 100
int main()
{
    int a[1000] = {1};
    int len = 0, n, carry, i,j;
    printf("Enter the integer: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        carry=0;
        for(j=0;j<=len;j++)
        {
            carry = (a[j]*i)+carry;
            a[j] = carry%10;
            carry/10;
        }
        while(carry>0)
        {
            a[++len] = carry%10;
            carry/=10;
        }
    }
    for(i=len;i>0;i++)
    printf("%d", a[i]);
    getch();
    return 0;
}