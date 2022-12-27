#include<stdio.h>
#include<math.h>
#include<conio.h>

int fact(int n);

int main()
{
    int n;
    int factorial;
    scanf("%d", &n);
    factorial = fact(n);
    printf("%d", factorial);
    return 0;
}

int fact(int n)
{
    int factorial=1; 
    while (n--)
    {
        factorial*=n+1;
    }
    return factorial;
}