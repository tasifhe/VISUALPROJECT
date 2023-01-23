//* Inheritance: Protected to Public is accessible
//* Through using public function
#include<bits/stdc++.h>
using namespace std;

class OOP{
    protected:
    void CPP()
    {
        cout<<"C++: Is a Object Oriented Programming language"<<endl;
    }
    void CS()
    {
        cout<<"C#: Is a Object Oriented Programming language"<<endl;
    }
    public:
    void CallProtected()
    {
        CPP();
        CS();
    }
};

class SP : public OOP{
    protected:
    void Python()
    {
        cout<<"Python: Is a Scripting Programming language"<<endl;
    }
    void Java()
    {
        cout<<"Java: Is a Object Oriented Programming language"<<endl;
    }
    public:
    void CallProtected1()
    {
        Python();
        Java();
    }
};

int main()
{
    SP obj;
    obj.CallProtected();
    obj.CallProtected1();
}