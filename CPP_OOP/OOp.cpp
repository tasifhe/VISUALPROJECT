#include<iostream>
#include<list>
#include<conio.h>
using namespace std;
class THE
{
    public:         //PUBLIC ACCESS MODIFIER
    string name;
    string title;
    int age;
    list <string> skills;
};
int main()
{
    THE tas;
    tas.name= "Tasif Hossain Emon";
    tas.title= "Skills: ";
    tas.age= 21;
    tas.skills= {"1.Game Development", "2.Level Design", "3.Programming", "4.Art"};

    cout<<"Name: "<<tas.name<<endl;
    cout<<"Age: "<<tas.age<<endl;
    cout<<""<<tas.title<<endl;
    for(string sk:tas.skills)
    {
        cout<< sk <<endl;
    }
    //getch();
    //return 0;
    system("pause>0");
}