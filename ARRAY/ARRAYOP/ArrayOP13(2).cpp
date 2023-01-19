//Solved by Tasif Hossain Emon
 //Student of SMUCT //BATCH 29th //ID:221071042
//*Transfer or copy a element of index to another index
#include <iostream>
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
    cout<<"Enter the index of the element to be copied: ";
    int index;
    cin>>index;
    temp=a[index];
    cout<<"Enter the index of the element to be copied to: ";
    int index2;
    cin>>index2;
    a[index2]=temp;
    cout<<"The copied array elements are: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nDONE"<<endl;
    system("Color A0");
    return 0;
}