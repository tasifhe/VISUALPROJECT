#include<stdio.h>


//PrimeNumber
int main()
{
    int n, count=0;
    printf("Enter any positive value: ");
    scanf("%d", &n);

    for (int i = 2; i <n ; i++)
    {
        if (n%2==0)
        {
            count++;
            break;
        }   
    }
    if (count==0)
    {
        printf("It is a prime number");
    }
    else
    {
        printf("Not a prime number");
    }
    return 0;
}