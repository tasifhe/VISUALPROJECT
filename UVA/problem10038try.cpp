#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
    int a[3100], b[3100], n, check, i;

    while (cin>>n)
    {
        check = 1;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<n;i++)
        {
            b[i] = abs(a[i] - a[i-1]);
            //cout<<b[i]<<"  ";
        }
    
        sort(b, b+i);

        for(i=1;i<n;i++)
        {
            //cout<<b[i]<<"  ";
            if(b[i] != i)
            {
                check = 0;
                break;
            }
        }
        if(check == 0)
            cout<<"Not Jolly\n";
        else
            cout<<"Jolly\n";
    }
    return 0;
}