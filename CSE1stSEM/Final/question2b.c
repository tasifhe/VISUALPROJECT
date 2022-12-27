#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int totalcase, casenum=1, n1, n2, small, weight, i;
    printf("Enter Case Number: ");
    scanf("%d", &totalcase);

    while (casenum<=totalcase)
    {
        printf("Enter the number of chocolates: ");
        scanf("%d %d", &n1, &n2);
        small= n1<n2 ? n1:n2;
        for (i = small; i>=1; i--)
        {
            if (n1%i==0 && n2%i==0)
            {
                weight=i;
                break;
            }
            
        }
        printf("Case %d: %d", casenum, weight);
        if (casenum!=totalcase)
        {
            printf("\n");
        }
        casenum++;
    }
    getch();
    return 0;
}