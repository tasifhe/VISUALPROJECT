#include<stdio.h>
#include<conio.h>
//CODE BY TASIF HOSSAIN EMON (ID:221071042)
int main()
{
    float w;
    printf("Enter the cargo weight: ");
    scanf("%f", &w);

    if (w>=10 && w<31)
    {
        printf("LIGHT");
    }
    else
    {
        if (w>=31 && w<56)
        {
            printf("MEDIUM");
        }
        else
        {
            if (w>=56 && w<80)
            {
                printf("HEAVY");
            }
            else
            {
                if (w>=80 && w<=110)
                {
                    printf("LARGE");
                }
                else
                {
                    if (w>110)
                    {
                        printf("EXTRA LARGE");
                    }
                    else
                    {
                        printf("WRONG INPUT");
                    }
                    
                }
                
            }
        }
        
    }
    getch();
    return 0;    
}