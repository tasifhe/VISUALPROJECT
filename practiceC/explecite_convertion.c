#include<stdio.h>

//

int main()
{
    //explicit float to int
    int a = (int) 1.999999;
    printf("%d\n", a);

    //explicit float to int
    float b = (int) 2.99999;
    printf("%f\n", b);

    //explicit int to float
    int c = 6.69696969;
    //problem
    printf("%f",c);
    
    //Operator Precedence
    int j = 4 * 3 / 6 * 2 ;
    printf("%d\n",j);//close


    return 0;
}