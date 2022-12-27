//FOR LOOP
#include<stdio.h>
#include<conio.h>
int main ()
{
    /*iterator or counter variable
    increament operator
    a = a +1 , a += 1, a++ 
    i++ > use then increase
    ++i > increase then use
    
    decrement operator
    
    i-- post decrement
    --i pre decrement
   */

    int c;
    printf("Enter the value of c: ");
    scanf("%d", &c);

    for (int a = 0; a <= 9; a++)
    {
        printf("AMI ASHOLEI BOKACHODA\n");
    }

    for (int b = 9; b >= 1; --b)
    {
        printf("%d \n", b);
    }
    
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c \n",ch);
    }
    for (int i = 0; i <= c; i++)
    {
        printf("%d", i);
    }
    

    getch();
    return 0;
}