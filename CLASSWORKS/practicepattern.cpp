#include<iostream>
#include<conio.h>
using namespace std;
/*
int main ()
{
    int r, c, nr, flag, space;
    cout<<"Enter the number of rows: ";
    cin>>nr;

    for(r = 1; r<=nr; r++)
    {
        flag = r-1;
        space = nr-r;
        printf("%*s", space*2, "");
        for(c = 1; c<=r*2-1; c++)
        {
            printf("%d ", c>r ? flag-- : c);
        }
        printf("\n");
    }

    getch();
    return 0;
}*/
// int main()
// {
//     int nr,r,c,sp;
//     cout<<"Enter the number of rows: ";
//     cin>>nr;
//     for(r=1;r<=nr;r++)
//     {
//         for(sp=1;sp<=(nr-r);sp++)
//         {
//             cout<<"  ";
//         }
//         for(c=1;c<=(2*r)-1;c++)
//         {
//             cout<<c<<" ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

int main()
{
    int nr,r,c,sp;
    cin>>nr;
    for(r=nr;r>=1;r--)  
    {
        for(sp=1;sp<=(nr-r);sp++)
        {
            cout<<"  ";
        }
        for(c=1;c<=(2*r)-1;c++)
        {
            cout<<r<<" ";
        }
        cout<<"\n";
    }
    return 0;
}