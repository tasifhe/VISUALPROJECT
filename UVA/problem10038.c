#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,check,num,arr[3100],ar[3100],test[3100],j;
    while (scanf("%d", &n) != EOF)
    {
        for(i=0; i<n;i++)
        {
            scanf("%d", &arr[i]);
        }
        for(i=0; i<n-1; i++)
        {
            ar[i] = abs(arr[i] - arr[i+1]);
        }
        num = 1;
        for(i=0; i<n-1;i++)
        {
            test[i] = num;
            num++;
        }
        check = 0;
        for(i=0; i<n-1; i++)
        {
            for(j=0; j<n-1; j++)
            {
                if (test[i] == ar[j])
                {
                    check = 1;
                }
            }
            if (check == 1)
            {
                check = 0;
            }
            else
            {
                check = 2;
                break;
            }
        }
        if (check == 2)
        {
            printf("Not Jolly\n");
        }
        else
        {
            printf("Jolly\n");
        }
    }
    return 0;
}