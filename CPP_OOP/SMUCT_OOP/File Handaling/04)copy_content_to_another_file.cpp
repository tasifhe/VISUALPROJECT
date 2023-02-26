//* copy the contents of one file to another
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string line;
    ifstream myfile ("example01.txt");
    ofstream myfile2 ("example02.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            myfile2 << line;
        }
        myfile.close();
        myfile2.close();
        cout << "Done." << endl;
    }
    else cout << "Unable to open file";
    return 0;
}
