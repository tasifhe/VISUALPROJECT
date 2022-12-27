#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<bits/stdc++.h>
int main()
{
    int can, harry, larry;
    cout << "Enter Harry's and Larry's shooting round: ";
    cin >> harry >> larry;

    
    printf("%d cans were not shot by Harry\n", larry - 1); 
    printf("%d cans were not shot by Larry\n", harry - 1);

    return 0;
}