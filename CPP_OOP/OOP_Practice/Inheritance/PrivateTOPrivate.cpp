//* Inheritance: Private to Private is not accessible
//* Even Through using public function
#include<bits/stdc++.h>
using namespace std;

class OOP{
    private:
    void CPP()
    {
        cout<<"C++: Is a Object Oriented Programming language"<<endl;
    }
    void CS()
    {
        cout<<"C#: Is a Object Oriented Programming language"<<endl;
    }
    public:
    void CallPrivate1()
    {
        CPP();
        CS();
    }
};

class SP : private OOP{
    private:
    void Python()
    {
        cout<<"Python: Is a Scripting Programming language"<<endl;
    }
    void Java()
    {
        cout<<"Java: Is a Object Oriented Programming language"<<endl;
    }
    public:
    void CallPrivate2()
    {
        Python();
        Java();
    }
};

int main()
{
    SP obj;
    obj.CallPrivate1();
    obj.CallPrivate2();
}