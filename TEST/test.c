#include<stdio.h>
#include<conio.h>

int main()
{
    float price [3];
    printf("Enter the value of first product: ");
    scanf("%f", &price[1]);
    printf("Enter the value of second product: ");
    scanf("%f", &price[2]);
    printf("Enter the value of third product: ");
    scanf("%f", &price[3]);

    printf("Final price of first product: %f\n", price[1]+(0.18*price[1]));
    printf("Final price of second product: %f\n", price[2]+(0.18*price[2]));
    printf("Final price of second product: %f\n", price[2]+(0.18*price[2]));
    return 0;
}