#include<stdio.h>
#include<conio.h>

int main ()
{
    int a ;
    printf("Enter 1, 2 or 3: ");
    scanf("%d", &a);

    if (a == 1)
    {
        printf("RED");
    }
    if(a == 2)
    {
        printf("GREEEN");
    }
    if (a == 3)
    {
        printf("BLUE");
    }
    

    getch();
    return 0;

}