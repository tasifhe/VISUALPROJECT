#include<stdio.h>
#include<math.h>
#include<conio.h>

int fibo (int n);

int main ()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("%d", fibo(n));

    return 0;
}

int fibo (int n)
{
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    int fibN1 = fibo(n-1);
    int fibN2 = fibo(n-2);
    int fibN = fibN1 + fibN2;
    printf("Fibonacci of %d is: %d\n", n, fibN);
    return  fibN;
}