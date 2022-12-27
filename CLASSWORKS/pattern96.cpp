#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int main()
{
    int nr, c,r;
    cin>>nr;
    for(r=1;r<=nr;r++)
    {
        for(c=r;c<=nr;c++)
        {
            printf("%c ", r+64);
        }
        cout<<"\n";
    }
    system("color 2");
    getch();
    return 0;
}