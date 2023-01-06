#include <iostream>
#include <string>

using namespace std;

class Person {
public:
  Person(string name, int age) {
    // Parameterized constructor code goes here
    this->name = name;
    this->age = age;
  }
  void printInfo() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
  }
private:
  string name;
  int age;
};

int main() {
  string name;
  int age;
  cout << "Enter name: ";
  getline(cin, name);
  cout << "Enter age: ";
  cin >> age;
  Person p(name, age);
  p.printInfo();
  return 0;
}
