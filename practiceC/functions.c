#include<stdio.h>
#include<conio.h>
#include<math.h>

void calPrice(float value);

int main()
{
    float value;
    printf("Enter the value of a product: ");
    scanf("%f", &value);
    calPrice(value);
    printf("Actual value is: %f\n", value);
    return 0;
}

void calPrice(float value)
{
    value = value + (0.18 * value);
    printf("Final value is: %fBDT", value);
}
