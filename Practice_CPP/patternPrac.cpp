#include<iostream>
#include<conio.h>
using namespace std;

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
    cout<<"Enter the number of rows: ";
    cin>>nr;
    for(r=nr;r>=1;r--)
    {
        for(sp=1;sp<=(nr-r);sp++)
        {
            cout<<"  ";
        }
        for(c=1;c<=(2*r)-1;c++)
        {
            cout<<c<<" ";
        }
        cout<<"\n";
    }
    return 0;
}