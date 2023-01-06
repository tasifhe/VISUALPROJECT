#include <iostream>
#include <cstdlib>

using namespace std;

class MotionCalculator
{
private:
    double u;
    double a;
    double t;

public:
    MotionCalculator(double initialVelocity, double acceleration, double time)
    {
        u = initialVelocity;
        a = acceleration;
        t = time;
    }

    double computeEquation()
    {
        return u*t + 1/2*a*t*t;
    }
};

int main()
{
    cout << "Enter the value of u: ";
    double u;
    cin >> u;
    cout << "Enter the value of a: ";
    double a;
    cin >> a;
    cout << "Enter the value of t: ";
    double t;
    cin >> t;

    MotionCalculator calculator(u, a, t);
    double s = calculator.computeEquation();
    cout << "The value of s is: " << s << endl;

    return 0;
}