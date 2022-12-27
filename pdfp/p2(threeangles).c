#include<stdio.h>
#include<math.h>
#include<conio.h>
//Given three sides of a triangle, find its three angles.
int main()
{
    double a,b,c;//three sides of triangle.
    double angle1, angle2, angle3;//three angles.
    printf("Enter side a: ");
    scanf("%lf", &a);
    printf("Enter side b: ");
    scanf("%lf", &b);
    printf("Enter side c: ");
    scanf("%lf", &c);


    angle1 = ((c*c)+(b*b)-(a*a)/2*b*c);
    angle2 = ((a*a)+(c*c)-(b*b)/2*a*c);
    angle3 = ((a*a)+(b*b)-(c*c)/2*a*b);

    printf("%lf\n", acos(-1.)*angle1);
    printf("%lf\n", acos(-1.)*angle2);
    printf("%lf\n", acos(-1.)*angle3);

    return 0;
}