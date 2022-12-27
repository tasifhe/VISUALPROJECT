#include<stdio.h>

//EVEN OR ODD
// int main()
// {
//     int a;
//     printf("Enter a integer value: ");
//     scanf("%d", &a);
    
//     //For EVEN
//     if(a%2==0)
//     {
//         printf("EVEN");
//     }
//     //FOR ODD
//     else
//     {
//         printf("ODD");
//     }
    
// }

int main()
{
    char S;
    printf("Enter 'S' for Sunday, Enter 'M' for Monday: ");
    scanf("%c", &S);

    if(S == 'S')
    {
        printf("Exam Ache");
    }
    else if (S == 'M')
    {
        printf("CHUTI");
    }
    else
        printf("Exam nai");

    return 0;
}

