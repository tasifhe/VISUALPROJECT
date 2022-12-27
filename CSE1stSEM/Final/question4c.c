//1+2+4+7+11+........+n
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int n, i=0, now=1, sum=0;
    printf("Enter the last term: ");
    scanf("%d", &n);
    printf("The series: ");
    while (now<n)
    {
        now+=i;
        if (now>n)
        {
            break;
        }
        sum += now;
        i++;
        printf("%d", now);
    }
    printf("\nSum of the series is: %d\n", sum);
    getch();
    return 0;
}