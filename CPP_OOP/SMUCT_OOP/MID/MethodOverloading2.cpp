//Overloading with different number of parameters
#include <iostream>
using namespace std;

class MethodCall
{
 public:
  int method(int a, int b)
  {
    int sum = a + b;
    return sum;
  }
  int method(int a, int b, int c)
  {
    int sum = a + b + c;
    return sum;
  }
};

int main()
{
  MethodCall obj;
  cout << obj.method(10, 20) << endl;
  cout << obj.method(10, 20, 30) << endl;
  return 0;
}