#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//Fibonacci with array
int main()
{
    int i,n;
    int fib[30];
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fib[0]=0;
    fib[1]=1;
    for(i=2;i<n;i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d ", fib[i]);
    }
    getch();
    return 0;
}