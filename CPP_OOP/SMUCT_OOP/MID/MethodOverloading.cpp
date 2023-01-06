//Overloading with different parameter types
#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int x, int y)
    {
        return x + y;
    }

    double add(double x, double y)
    {
        return x + y;
    }
};

int main()
{
    using namespace std;
    Calculator calc;
    cout << calc.add(2, 3) << endl;      // prints 5
    cout << calc.add(2.5, 3.5) << endl;  // prints 6.0
    return 0;
}
