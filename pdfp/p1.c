#include<stdio.h>
#include<math.h>
#include<conio.h>
//Distance between two points.
int main()
{
    float x1, x2, y1, y2, distance;
    printf("Enter point(x1,y1): ");
    scanf("%f%f", &x1, &y1);
    printf("Enter point(x2,y2): ");
    scanf("%f%f", &x1, &y1);

    distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("The distance is: %0.2fm", distance);
    getch();
    return 0;
}