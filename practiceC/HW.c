#include<stdio.h>
#include<conio.h>

//Homework A
//Write a program to print the average of 3 numbers
// int main ()
// {
//     int n1, n2, n3,sum;
//     float avg;
//     printf("Write a program to print the average of 3 numbers");
//     printf("Enter any three numbers: ");
//     scanf("%d %d %d", &n1, &n2, &n3);
//     sum = n1+n2+n3;
//     avg = sum/3;
//     printf("Average of three number is: %f", avg);
//     getch();
//     return 0;
// }

//HomeWork B
//Check given character is digit or not
// int main()
// {
//     char ch;
//     printf("Check given character is digit or not \n");
//     printf("Please enter a character: ");
//     scanf("%c", &ch);
//     if(ch>='0' && ch<='9')
//     {
//         printf("Given Character %c is Digit.", ch);
//     }
//     else
//     {
//         printf("Given Character %c is Not Digit.", ch);
//     }
//     return(0);
// }

//Homework B
////Check given character is digit or not(isdigit())
// int main ()
// {
//     char C;
//     printf("Enter a Character or Digit: ");
//     scanf("%c", &C);
//     if (isdigit(C))
//     {
//         printf("Given Character is a Digit. ", C);
//     }
//     else
//     {
//         printf("Given Character is not a Digit. ", C);
//     }  
//     getch();
//     return 0;   
// }

//Homework C
// int main ()
// {
//     int n1, n2, samll;
//     printf("enter two integer values: ");
//     scanf("%d %d", &n1, &n2);
//     samll = (n1<n2) ? n1 : n2;
//     printf("Smallest number is : %d", samll);    
//     getch();
//     return 0;
// }

// int main()
// {
//     int a, sum= 0, b;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//     while (a>0)
//     {
//         b=a%10;
//         sum += b;
//         a=a/10;
//     }
//     printf("Sum fo digits: %d", sum);
//     getch();
//     return 0;
// }

#include <stdio.h>    
     
int main()    
{    
    //Initialize array     
    int arr[] = {1, 2, 3, 4, 5};     
        
    //Calculate length of array arr    
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    printf("Original array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }      
        
    printf("\n");    
        
    printf("Array in reverse order: \n");    
    //Loop through the array in reverse order    
    for (int i = length-1; i >= 0; i--) {     
        printf("%d ", arr[i]);     
    }     
    return 0;    
}   
