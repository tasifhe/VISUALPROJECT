//* delete a specific line from a file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string line;
    int line_count = 0;
    ifstream myfile ("001_example.txt");
    ofstream myfile2 ("002_example.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            line_count++;
            if (line_count != 1)
            {
                myfile2 << line << endl;
            }
        }
        myfile.close();
        myfile2.close();
        cout << "Done." << endl;
    }
    else cout << "Unable to open file";
    return 0;
}