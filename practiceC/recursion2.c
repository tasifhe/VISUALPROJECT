#include<stdio.h>
#include<conio.h>
#include<math.h>
//sum of natural numbers
//factorial of n number

int sum (int n);
int fact (int f);

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The sum is: %d\n", sum(n));
    int f;
    printf("Enter the value of f: ");
    scanf("%d", &f);
    printf("The factorial of n is: %d\n", fact(f));

    return 0;
}

int sum(int n)
{
    if (n==1)
    {
        return 1;
    }
    
    int sumN1 =  sum(n-1);
    int sumN =  sumN1 + n;
    return sumN;
}
int fact (int f)
{   
    if (f==0)
    {
        return 1;
    }
    
    int factN1 = fact(f-1);
    int factN = factN1 * f;
    return factN;
}
