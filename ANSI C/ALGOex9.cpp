#include<iostream>
#include<conio.h>
using namespace std;
//SUM EVEN
int main()
{
    int N,SUM=0;
    cout<<"Enter the maximum even numbers to sum: ";
    cin>>N;
    for (int i = 1; i <=N; i++)
    {
        if (i%2==0)
        {
            SUM+=i;
        }
    }
    cout<<"Sum of 1 to N even number is: "<<SUM;
    getch();
    return 0;
}
/*SUM EVEN ALGORITHM
Step-1: Start;
Step-2: Input N;
Step-3: 

*/