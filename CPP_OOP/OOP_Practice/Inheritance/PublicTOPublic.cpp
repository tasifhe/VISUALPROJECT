//* Inheritance: Public to Public is accessible
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

class SP : public OOP{
    public:
    void Python()
    {
        cout<<"Python: Is a Scripting Programming language"<<endl;
    }
    void Java()
    {
        cout<<"Java: Is a Object Oriented Programming language"<<endl;
    }
};

int main()
{
    SP obj;
    obj.Python();
    obj.CPP();
    obj.CS();
    obj.Java();
}