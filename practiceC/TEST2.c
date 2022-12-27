#include<stdio.h>

//factorial
// int main ()
// {
//     int n;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
//     int factorial = 1;
//     for (int a = 1; a <=n; a++)
//     {
//         factorial = factorial*a;
//         printf("%d\n", factorial);
//     }
//     printf("The factorial of the number is: %d\n", factorial);
//     return 0;
// }

// int main ()
// {
//     int sum=0;
//     for (int i = 5; i<=50; i++)
//     {
//         sum += i;
//         printf("%d\n", sum);
//     }
//     return 0;
// }

// int main ()
// {
//     for (int i = 1; i<50; i++)
//     {
//         if (i%2!=0)
//         {
//             continue;
//         }
//         printf("%d\n", i);
//     }
  
// }

// int main()
// {
//     char C;
//     printf("Enter a character or a digit: ");
//     scanf("%c", C);

//     if (C>=0 && C<=9)
//     {
//         printf("Its a Digit");
//     }
//     else
//     {
//         printf("Its not a Digit");
//     }
    
//     return 0;
// }

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

// int main()
// {
//     unsigned int n;
//     int count=0;
//     printf("Enter a positive integer: ");
//     scanf("%u", &n);
//     for (int i = 0; i < n; i++)
//     {
//         if (n%2==0)
//         {
//             count++;
//             break;
//         }  
//     }
//     if (count==0)
//     {
//         printf("Its a prime number");
//     }
//     else
//     printf("neh mara kha");
//     return 0;
// }