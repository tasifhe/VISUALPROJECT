//* find the size of a file in bytes
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
        myfile.seekg(0, ios::end);
        cout << "Size of file: " << myfile.tellg() << " bytes." << endl;
        myfile.close();
    }
    else cout << "Unable to open file";
    return 0;
}