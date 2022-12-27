#include<stdio.h>
#include<conio.h>
#include<math.h>

float result (int sci, int math, int eng);

int main ()
{
    int sci;
    int math;
    int eng;
    printf("Enter numbers: ");
    scanf("%d %d %d", &sci, &math, &eng);

    printf("Percentage: %d", result(sci, math, eng));
    return 0;
}

float result (int sci, int math, int eng)
{
    return ((sci+math+eng)/3);
}