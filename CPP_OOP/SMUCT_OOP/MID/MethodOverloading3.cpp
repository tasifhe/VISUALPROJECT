//Overloading with different return types
#include <iostream>
using namespace std;

class Conversion
{
public:
// Method to convert from Celsius to Fahrenheit
    float convertToFahrenheit(float celsius)
    {
        return (9.0/5.0) * celsius + 32;
    }

// Overloaded method to convert from Fahrenheit to Celsius
    float convertToCelsius(float fahrenheit)
    {
        return (5.0/9.0) * (fahrenheit - 32);
    }

};

int main()
{
    Conversion obj;
    cout << obj.convertToFahrenheit(30) << endl; //*prints 86
    cout << obj.convertToCelsius(86) << endl;    //*prints 30
    return 0;
}