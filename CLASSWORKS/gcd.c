#include<stdio.h>
#include<conio.h>

int main()
{
    int x,y,small,gcd,lcm;
    printf("Enter two integer: ");
    scanf("%d %d", &x,&y);

    small = (x<y) ? x:y;
    gcd=0;
    for (int i = small; i>=1; i--)
    {
        if (x%i==0 && y%i==0)
        {
            gcd=i;
            break;
        }
    }
    printf("GCD is: %d\n", gcd);
    lcm= x*y/gcd;
    printf("LCM is: %d", lcm);
    getch();
    return 0;
}