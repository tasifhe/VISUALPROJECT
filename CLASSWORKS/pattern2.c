#include<stdio.h>
/*Given Pattern
      1
    2 1 2
  3 2 1 2 3
4 3 2 1 2 3 4
*/
int main()
{
    int r,nr,c;    
    printf("Enter the number of rows: ");
    scanf("%d",&nr);
    for(r=1;r<=nr;r++)
    {
        for(c=1;c<=nr-r;c++)
        {
            printf("  ");//For printing the space
        }
        for(c=r;c>0;c--)
        {
            printf(" %d",c);
        }
        for(c=2;c<=r;c++)
        {
            printf(" %d",c);
        }
            printf("\n");
    }
    return 0;
}