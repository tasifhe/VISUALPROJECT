//Solved by Tasif Hossain Emon
 //Student of SMUCT //BATCH 29th //ID:221071042
//*Right shift by one index
#include<iostream>
using namespace std;

int main()
{
    int a[101],n,temp;
    cout<<"Enter the array size: ";
    cin>>n;
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    temp=a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        a[i+1]=a[i];
    }
    a[0]=temp;
    cout<<"The modified array elements are: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nDONE"<<endl;
    system("Color A0");
    return 0;
}