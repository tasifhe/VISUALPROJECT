#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int totalcase, casenum=1, lastterm,sum,i;
    printf("Enter Case Number:");
    scanf("%d", &totalcase);
    while (casenum<=totalcase)
    {
        printf("Enter the last term: ");
        scanf("%d", &lastterm);
        sum=0;
        for(i=1;i<=lastterm;i+=2)
        {
            sum+=i;
        }
        if (lastterm>=7)
        {
            sum-=7;
        }
        printf("Case %d: %d", casenum, sum);
        if (casenum!=totalcase)
        {
            printf("\n");
        }
        casenum++;
    }
    getch();
    return 0;
}