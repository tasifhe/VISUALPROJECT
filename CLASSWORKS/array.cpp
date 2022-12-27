#include<iostream>
using namespace std;
int main()
{
    char d[2][3],r,c;
    for(r=0;r<2;r++)
    {
        for(c=0;c<3;c++)
        {
            cout<<"Enter tow arrays: "; 
            cin>>d[r][c];
        }
        cout<<d;
    }
    return 0;
}