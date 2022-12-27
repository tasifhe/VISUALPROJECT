#include<iostream>

using namespace std;

int main()
{
    int n,printLim,i,j;

    cout<<"Enter the value of n: ";
    cin>>n;

    int reducer = 1;
    for(i = 1; i<= ((n*2)-1); i++ )
    {
        if(i<=n)
        {
        printLim = i;
        }
        else
        {
        printLim = n-reducer;
        reducer++;
        }

    for(j = 1; j<=printLim; j++)
    {
        cout<<j<<" ";
    }
    cout<<endl;
  }
  system("pause>0");
}