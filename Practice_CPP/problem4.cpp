#include<bits/stdc++.h>

using namespace std;

int main ()
{
    unsigned long long int A, B, C, K, sum, remainder;
    printf("please enter three positive integer: ");
    scanf("%llu %llu %llu", &A, &B, &C);

    sum = (A+B+C);
    remainder = sum % 3;
    K = sum - remainder;
    if(sum%3 == 0 || K%3 == 0)
    printf("Peaceful");
    else
    printf("Fight");

    return 0;
}