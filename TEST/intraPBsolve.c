#include<stdio.h>
#include<conio.h>

int main()
{
    int bus;
    int sum, extra;
    printf("Enter the sum value: ");
    scanf("%d", &sum);
    printf("Enter the extra taka: ");
    scanf("%d", &extra);

    bus = (sum-extra)/2;

    printf("Value of bus is: %dtk\n", bus);
    printf("Value of metro is: %dtk\n", sum-bus);

    getch();
    return 0;
}