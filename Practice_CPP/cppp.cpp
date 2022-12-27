#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
class animal{
     protected:
       char name[10];
       int age;
       
     public:
       
      void set_value(char name[10],int y)
      {
           this->name[10]= name[10]; //ekta
           age= y;
      }  
};
class zebra: public animal{
    public:
      void set_zebra()
      { 
         cout<< "the name is "<<name<<"the age is "<<age<< " their body  color black and white"<<endl;
      }
};
class dolphin: public animal{
  public:
    void set_dolpine()
  {
    cout<<"the name is "<< name <<"the age is "<<age<< " their body  color white"<<endl;
  }
};

int main()
{
    zebra z;
    dolphin d;
    char n1[10] = "zeb" ;
    char n2[10] ="dol";
    z.set_value(n1,2);
    d.set_value(n2,4);
    z.set_zebra();
    d.set_dolpine();

    
    return 0;

}