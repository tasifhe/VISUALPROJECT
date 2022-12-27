//WHILE LOOP
#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    int i=0;
    while (i<=a)
    {
        printf("%d \n",i);
        i++;
    }
    for (int j = 0; j <= a; j++)
    {
        printf("%d ", j);
    }
    

    getch();
    return 0;
}