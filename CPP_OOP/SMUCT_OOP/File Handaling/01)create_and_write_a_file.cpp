//* create and write to a file
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    ofstream myfile("example01.txt");
    if (myfile.is_open())
    {
        myfile << "This is a line.\n";
        myfile.close();
    }
    else
    {
        cout << "Unable to open file.\n";
    }
    cout<< "Done.\n";
    return 0;
}
