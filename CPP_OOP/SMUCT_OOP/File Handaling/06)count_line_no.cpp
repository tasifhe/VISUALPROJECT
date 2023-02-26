//* count the number of lines in a file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string line;
    int line_count = 0;
    ifstream myfile ("example01.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            line_count++;
        }
        myfile.close();
        cout << "Number of lines in file: " << line_count << endl;
    }
    else cout << "Unable to open file";
    return 0;
}
