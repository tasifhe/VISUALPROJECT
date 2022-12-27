#include<stdio.h>
#include<conio.h>
int main()
{
    float age;
    char ans;
    AGE:
    printf("Enter age: ");
    scanf("%f", &age);
    if (age>=18)
    {
        printf("BUIRA\n");
    }
    else
    {
        printf("PICCHI\n");
    }
    printf("Repeat? Enter y for yes n for no: ");
    scanf("%c", &ans);
    scanf("%c", &ans);
    if (ans == 'Y' || ans == 'N')
        goto AGE;
    getch();
    return 0;
}


// #include <stdio.h>  
// int main()   
// {  
//   int num,i=1;   
//   printf("Enter the number whose table you want to print?");   
//   scanf("%d",&num);  
//   table:   
//   printf("%d x %d = %d\n",num,i,num*i);  
//   i++;  
//   if(i<=10)  
//   goto table;    
// }  