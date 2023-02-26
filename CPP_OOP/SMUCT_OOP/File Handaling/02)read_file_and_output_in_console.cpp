//* read_file_and_output_in_console
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string line;
    ifstream myfile ("example01.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            cout << line << endl;
        }
        myfile.close();
    }
    else cout << "Unable to open file";
    return 0;
}