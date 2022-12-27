#include<algorithm>
#include<cmath>
#include<cstdio>

using namespace std;

int n;
int a[3100], b[3100];

int main()
{
    while (scanf("%d", &n) == 1)
    {
        bool joy = true;
        for(int i=0; i<n;i++)
        {
            scanf("%d", &a[i]);
        }
        for(int i = 0; i<n-1; i++)
        {
            b[i] = abs(b[i+1] - a[i]);
        }
        sort(b, b + n-1);

        for(int i = 0; i<n-1;i++)
        {
            if(b[i] != i+1)
            {
                joy = false;
            }
            if(joy == false)
            {
                printf("Not Jolly\n");
            }
            else
            {
                printf("Jolly\n");
            }
        }
    }
    return 0;
}
