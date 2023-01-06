#include<iostream>
using namespace std;

class MethodCall
{
 public:
  void method()
  {
    cout << "OOP" << endl;
  }
};

int main()
{
  MethodCall obj;
  obj.method();
  return 0;
}