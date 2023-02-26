//* Inheritance: Public to Protected is accessible
//* Through using public function
#include<bits/stdc++.h>
using namespace std;

class OOP{
    public:
    void CPP()
    {
        cout<<"C++"<<endl<<"Is a Object Oriented Programming language"<<endl;
    }
    void CS()
    {
        cout<<"C#"<<endl<<"Is a Object Oriented Programming language"<<endl;
    }
};

class SP : protected OOP{
    public:
    void Python()
    {
        cout<<"Python"<<endl<<"Is a Scripting Programming language"<<endl;
    }
    void Java()
    {
        cout<<"Java"<<endl<<"Is a Object Oriented Programming language"<<endl;
    }
    public:
    void CallProtected()
    {
        CPP();
        CS();
    }
};

int main()
{
    SP obj;
    obj.Python();
    obj.Java();
    obj.CallProtected();
}