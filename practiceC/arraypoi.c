#include<stdio.h>
#include<conio.h>
//pointer---array
int main()
{
    int nid[5];

    //input
    int *ptr= &nid[0];

    for (int i = 0; i <5; i++)
    {
        printf("%d index: ", i);
        scanf("%d", &nid[i]);
    }
    
    //output
    for (int i = 0; i < 5; i++)
    {
        printf("%d index = %d\n", i, nid[i]);
    }
    getch();
    return 0;
}