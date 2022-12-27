#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    system("color 0A");
    int n1=0,n2=1,count=0,lastT,fibo;
    printf("Enter the last term: ");
    scanf("%d", &lastT);
    while (count<lastT)
    {
        if(count<=1)
            fibo=count;
        else
        {
            fibo=n1+n2;
            n1=n2;
            n2=fibo;
        }
        printf("%d ", fibo);
        count++;
    }
    getch();
    return 0;
}