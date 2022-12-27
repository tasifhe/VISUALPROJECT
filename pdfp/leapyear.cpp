#include<iostream>

using namespace std;

int main()
{
    int y;
    cin >> y; //input year
    if (y%400==0 || (y%100!=0 && y%4==0))
        cout << y << " is leap year"<< endl;
    else
        cout << y << " is not leap year" << endl;
    return 0;
}