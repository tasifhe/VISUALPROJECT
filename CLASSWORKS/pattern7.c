#include <stdio.h>  
int main()  
{
    int i, j, nr, k, m = 1;
    printf ("Enter a number to define the rows: ");
    scanf ("%d", &nr);
      
    for ( i = nr; i >= 1; i--)
    {
        for ( j = 1; j <= m; j++)
        {  
            printf ("  "); // print the space
        }  
      
        for ( k = 1; k <= ( 2 * i - 1); k++)  
        {  
            printf ("%d ", k); // print the Star  
        }  
        m++;  
        printf ("\n");  
    }  
    return 0;
}  