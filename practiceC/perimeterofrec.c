#include<stdio.h>

//perimeter of rectangle
int main ()
{
    int l, w;
    printf("enter the value of lenth\n");
    scanf("%d", &l);
    printf("enter the value of width\n");
    scanf("%d", &w);

    printf("perimeter of rectangle : %d", 2 * l * w);
    return 0;

}