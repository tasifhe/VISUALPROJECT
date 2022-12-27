#include<iostream>
using namespace std;
/*Given Pattern
1
2 3
4 5 6
7 8 9 10
*/
int main()
{
    int nr, c,r,n=1;
    cin>>nr;
    for(r=0;r<=nr;r++)
    {
        for(c=0;c<=r;c++)
        {
            cout<<n<<" ";
            n++;
        }
        cout<<"\n";
    }
    return 0;
}