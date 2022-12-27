#include <stdio.h>
void area();
int main()
{
  area();
  return 0;
}
void area()
{
  int sqarea,sqside;
  printf("Enter the side of square :");
  scanf("%d",&sqside);
  sqarea = sqside * sqside;
  printf("Area of Square = %d",sqarea);
}