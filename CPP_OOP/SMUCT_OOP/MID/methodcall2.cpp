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
};

int main()
{
  MethodCall obj;
  cout << obj.method(10, 20) << endl;
  return 0;
}