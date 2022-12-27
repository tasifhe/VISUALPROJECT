#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
// int main()
// {
//    int i, j;
//    char input, alphabet = 'A';
//    printf("Enter an uppercase character you want to print in the last row: ");
//    scanf("%c", &input);
//    for (i = 1; i <= (input - 'A' + 1); ++i)
//    {
//       for (j = 1; j <= i; ++j)
//       {
//          printf("%c ", alphabet);
//       }
//       ++alphabet;
//       printf("\n");
//    }
//    getch();
//    return 0;
// }


//printing prime numbers in a range
// void main()
// {
//     int num1, num2, i, j, flag, temp, count = 0;
//     printf("Enter the value of num1 and num2 \n");
//     scanf("%d %d", &num1, &num2);
//     if (num2 < 2)
//     {
//         printf("There are no primes upto %d\n", num2);
//         exit(0);
//     }
//     printf("Prime numbers are \n");
//     temp = num1;
//     if ( num1 % 2 == 0)
//     {
//         num1++;
//     }
//     for (i = num1; i <= num2; i = i + 2)
//     {
//         flag = 0;
//         for (j = 2; j <= i / 2; j++)
//         {
//             if ((i % j) == 0)
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0)
//         {
//             printf("%d\n", i);
//             count++;
//         }
//     }
//     printf("Number of primes between %d & %d = %d\n", temp, num2, count);
// }

// int main()
// {
//    int num1, num2, flag, i, j;
//    printf("Enter two range(input integer numbers only):");
//    scanf("%d %d", &num1, &num2);
//    printf("Prime numbers from %d and %d are:\n", num1, num2);
//    for(i=num1+1; i<num2; ++i)
//    {
//       flag=0;
//       for(j=2; j<=i/2; ++j)
//       {
//          if(i%j==0)
//          {
//             flag=1;
//             break;
//          }
//       }
//       if(flag==0)
//          printf("%d\n",i);
//   }
//   return 0;
// }