#include <stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int oneIcecream = 80;
    int paid;
    int got;
    
    scanf("%d", &paid);
    int perIceCreamAsPaid = paid/oneIcecream;
    int totalAmount = (perIceCreamAsPaid*6) * oneIcecream;
    /*if(paid)
    {
        printf("%d", totalAmount);
    }
    else
    {

        printf("")
    }
    got =  - paid;
    printf("%d\n", totalAmount);
    printf("Returns %d", got);
    return 0;
}
