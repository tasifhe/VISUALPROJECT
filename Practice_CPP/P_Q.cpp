#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void printLogo() {
    cout << "logo here" << endl;
}    

int AskFraction(int &numerator, int &denominator) {
    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;

    while (denominator == 0 || denominator < 0) {
        cout << "Denominator must be a number above zero." << endl;
        cout << "Enter denominator: ";
        cin >> denominator;
    }

    return numerator, denominator;
 }

float DecimalValue(float &decimalValue, int numerator, int denominator) {
if (denominator != 0 && denominator > 0) {
    decimalValue = numerator / denominator;
}

return decimalValue;
}

void PrintFraction(int numerator, int denominator) {
cout << numerator << "/" << denominator << endl;
}

int main(int numerator, int denominator, float decimalValue) {

printLogo();

AskFraction(numerator, denominator);

DecimalValue(decimalValue, numerator, denominator);
cout << "The decimal value is: " << decimalValue << endl;

PrintFraction(numerator, denominator);

system("pause");
return 0;
}