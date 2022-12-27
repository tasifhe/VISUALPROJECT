#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int reqAmount, eksho=0, pashho=0, left=0;
    printf("Enter requested amount: ");
    scanf("%d", &reqAmount);

    if (reqAmount%100!=0)
    {
        printf("Wrong Input");
        getch();
        return 0;
    }
    eksho = reqAmount%500; //reqamount<500
    left=reqAmount-eksho;
    if(left>0)
    {
        if (reqAmount<=20000)
        {
            pashho = left * (20.0/100.0);
            pashho = (pashho/500)*500;
            left -= pashho;
        }
        else
        {
            pashho = left * (10.0/100.0);
            pashho = (pashho/500)*500;
            left -= pashho;
        }
    }
    printf("100Taka Notes: %d\n", eksho/100);
    printf("500Taka Notes: %d\n", pashho/500);
    printf("1000Taka Notes: %d\n", left/1000);
    getch();
    return 0;
}