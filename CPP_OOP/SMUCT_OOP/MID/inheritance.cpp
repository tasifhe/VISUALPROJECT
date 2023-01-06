#include <iostream>

using namespace std;

class BaseClass {
public:
  int value;
  void printValue() {
    cout << "Value: " << value << endl;
  }
};

class DerivedClass : public BaseClass {
public:
  void printDoubleValue() {
    cout << "Double Value: " << value * 2 << endl;
  }
};

int main() {
  DerivedClass obj;
  cout << "Enter value: ";
  cin >> obj.value;
  obj.printValue();
  obj.printDoubleValue();
  return 0;
}
