#include<stdio.h>

int main()
{
    int n[5][5];
    int m;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d", &n[i][j]);
            if (n[i][j] == 1)
            {
                m = abs(2-i) + (j-2);
                cout << m;
            }
        }
    }
    return 0;
}