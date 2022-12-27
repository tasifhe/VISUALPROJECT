#include<stdio.h>
#include<math.h>
#include<conio.h>
//Temperature Conversion
float convtemp (float C);

int main ()
{
    float C;
    printf("Enter the celcius value: ");
    scanf("%d", &C);

    float far = convtemp(C);
    printf("Converted temperature is: %fF", far);

    return 0;
}

float convtemp (float C)
{
    // if (/* condition */)
    // {
    //     /* code */
    // }
    float far =  C * (9.0/5.0) + 32;
    return far;
}