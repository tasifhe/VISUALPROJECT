#include<stdio.h>

int factorial(int n);

int main()
{
    int count,n;
    scanf("%d", &n);
    count=factorial(n);
    printf("%d", count);
}

int factorial(int n)
{
    int count =1;
    while (n--)
    {
        count*=n+1;
    }
    return count;
}