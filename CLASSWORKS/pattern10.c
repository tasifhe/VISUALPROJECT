#include<stdio.h>
#include<conio.h>
int main()
{
int n, i, j, k;
printf("Enter the number of rows: ");
scanf("%d",&n);
for(i = 1; i <= n; i++)
{
for(j = i; j <n; j++)
{
printf(" ");
}
for(k = 1; k < (i*2); k++)
{
printf("1");
}
printf("\n");
}
for(i = 4; i >= 1; i--)
{
for(j = n; j > i; j--)
{
printf(" ");
}
for(k = 1; k < (i*2); k++)
{
printf("1");
}
printf("\n");
}
return 0;
}