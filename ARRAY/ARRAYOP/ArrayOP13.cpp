//Solved by Tasif Hossain Emon
 //Student of SMUCT //BATCH 29th //ID:221071042
//*Transfer/copy one array to another array
#include <iostream>
using namespace std;

int main()
{
    int a[101],b[101],n;
    cout<<"Enter the array size: ";
    cin>>n;
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    cout<<"The copied array elements are: ";
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<"\nDONE"<<endl;
    system("Color A0");
    return 0;
}