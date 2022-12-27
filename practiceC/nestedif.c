#include<stdio.h>

int main()
{
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    if (a>=0)
    {
        printf("POSITIVE\n");

        if (a%2==0)
        {
            printf("EVEN\n");
        }
        else
        {
            printf("ODD\n");
        }    
    }
    else
    {
        printf("NEGATIVE\n");
        
        if (a%2==0)
        {
            printf("EVEN\n");
        }
        else
        {
            printf("ODD\n");
        }
    }
    
    return 0;
}