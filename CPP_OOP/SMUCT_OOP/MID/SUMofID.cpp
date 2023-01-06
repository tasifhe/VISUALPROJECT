#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter an integer: ";
    int num;
    cin >> num;

    string numString = to_string(num);  // Convert the integer to a string

    int sum = 0;
    for (char c : numString)  // Iterate through each character in the string
    {
        int digit = c - '0';  // Convert the character to an integer
        sum += digit;  // Add the integer to the running total
    }

    cout << "The summation of the digits of " << num << " is " << sum << endl;

    return 0;
}
