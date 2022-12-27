#include<iostream>

using namespace std;

int main()
{
    int n1,n2,n3,n4,n5;
    cout<<"Enter five numbers: ";
    cin>>n1>>n2>>n3>>n4>>n5;

    if (n1>n2 && n1>n3 && n1>n4 && n1>n5)   //for n1
    {
        cout<<"The greater number is: "<<n1<<endl;
    }
    else if (n2>n1 && n2>n3 && n2>n4 && n2>n5)  //for n2
    {
        cout<<"The greater number is: "<<n2<<endl;
    }
    else if (n3>n1 && n3>n2 && n3>n4 && n3>n5)  //for n3
    {
        cout<<"The greater number is: "<<n3<<endl;
    }
    else if (n4>n1 && n4>n2 && n4>n3 && n2>n5)  //for n4
    {
        cout<<"The greater number is: "<<n4<<endl;
    }
    else if (n5>n1 && n5>n2 && n5>n3 && n5>n4)  //for n5
    {
        cout<<"The greater number is: "<<n5<<endl;
    }
    else
    {
        cout<<"There is no greater number :)"<<endl;
    }
    system("pause>0");
    //return 0;   
}