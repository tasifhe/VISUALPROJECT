#include<stdio.h>
#include<conio.h>

void baira(int arr[], int a);

int main()
{
    int arr[] = {1,2,3,4,5,6};
    baira(arr, 6);

    getch();
    return 0;
}

void baira(int arr[], int a)
{
    for (int i = 0; i < a; i++)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}