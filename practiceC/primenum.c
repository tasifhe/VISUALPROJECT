#include<stdio.h>
int main()
{
    unsigned int n, count = 0;
    printf("Enter any positive integer: ");
    scanf("%u", &n);

    for (int i =2; i<n; i++)
    {
        if (n%i==0)
        {
            count++;
            break;
        }
    }
    if (count==0)
    {
        printf("PRIME NUMBER");
    }
    else
    {
        printf("NOT A PRIME NUMBER");
    }
    return 0;
}