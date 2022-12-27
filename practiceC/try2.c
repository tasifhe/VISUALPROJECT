#include<stdio.h>

int main()
{
    int a, b;
    printf("enter value of a");
    scanf("%d", &a);

    printf("enter value of b");
    scanf("%d", &b);

    //total calculation
    int sum = a * b;
    printf("sum is : %d", sum);
    return 0;
}