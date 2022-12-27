#include<stdio.h>

int main ()
{
    int a;
    printf("Enter the value fo a: ");
    scanf("%d", &a);
    
    int i = 0;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i<=a);
    
}