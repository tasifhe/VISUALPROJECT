#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    system("color 0A");
    int num[1000],max,min,sum=0,i,n;
    char ans;
    printf("How many numbers:");
    scanf("%d", &n);
    printf("Enter numbers: ");
    for (i=0; i<n;i++)
    {
        scanf("%d", &num[i]);
    }
    for(i=0;i<n;i++)
    {
        sum += num[i];
    }
    max= num[0];
    for(i=0;i<n;i++)
    {
        if (max<num[i])
        {
            max=num[i];
        }
    }
    min= num[0];
    for(i=0;i<n;i++)
    {
        if (min>num[i])
        {
            min=num[i];
        }
    }
    printf("The sum is: %d\n", sum);
    printf("The average is: %.2f\n", (float)sum/n);
    printf("Greater number is: %d\n", max);
    printf("Smallest number is: %d\n", min);
    getch();
    return 0;
}