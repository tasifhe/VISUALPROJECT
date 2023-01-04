//Array Elemets addition
#include<iostream>
using namespace std;

int main()
{
    int n,a[101];
    int sum=0;
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Ente array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    cout<<"Sum of the elements are: "<<sum<<endl;
    cout<<"\nDONE"<<endl;
    system("Color A0");
    return 0;
}