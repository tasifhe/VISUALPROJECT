//* Inheritance: Public to Private is accessible
//* Through using public function
#include<bits/stdc++.h>
using namespace std;

class OOP{
    public:
    void CPP()
    {
        cout<<"C++: Is a Object Oriented Programming language"<<endl;
    }
    void CS()
    {
        cout<<"C#: Is a Object Oriented Programming language"<<endl;
    }
};

class SP : private OOP{
    public:
    void Python()
    {
        cout<<"Python: Is a Scripting Programming language"<<endl;
    }
    void Java()
    {
        cout<<"Java: Is a Object Oriented Programming language"<<endl;
    }
    public:
    void CallPrivate()
    {
        Python();
        Java();
    }
};

int main()
{
    SP obj;
    obj.Python();
    obj.Java();
    obj.CallPrivate();
}