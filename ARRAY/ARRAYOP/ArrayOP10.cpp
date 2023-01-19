//Solved by Tasif Hossain Emon
 //Student of SMUCT //BATCH 29th //ID:221071042
//*Print highest number from array
#include<iostream>
using namespace std;

int main()
{
    int n,a[101];
    int max=0;
    system("Color 0A");
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Ente array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<"Highest number is: "<<max<<endl;
    cout<<"\nDONE"<<endl;
    system("Color A0");
    return 0;
}