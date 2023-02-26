//* append message to existing file
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string message = "Appending this to a file.\n";
    ofstream myfile("example01.txt", ios::app);
    if (myfile.is_open())
    {
        myfile << message;
        myfile.close();
    }
    else
    {
        cout << "Unable to open file.\n";
    }
    cout<<"Done.\n";
    return 0;
}