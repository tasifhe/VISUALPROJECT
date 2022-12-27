#include<stdio.h>
int main()
{
    char day;
    printf("Enter the first letter of a day: ");
    scanf("%c", &day);

    switch (day)
    {
    case 'S' : printf("Saturday");
        break;
    case 's' : printf("Sunday");
        break;
    case 'M' : printf("Monday");
        break;
    case 'T' : printf("Tuesday");
        break;
    case 'W' : printf("Wednesday");
        break;
    case 't' : printf("Thursday");
        break;
    case 'F' : printf("Friday");
        break;
    
    default: printf("FAX KOR");
    }

    return 0;
}