//* delete a specific word from a file
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
    string word = "";
    for (int i = 0; i < static_cast<int>(line.size()); i++)
    {
        if (line[i] != ' ')
        {
            word += line[i];
        }
        else
        {
            if (word != "this")
            {
                myfile2 << word << " ";
            }
            word = "";
        }
    }
        if (word != "this")
        {
            myfile2 << word << endl;
        }
    }
        myfile.close();
        myfile2.close();
        cout << "Done." << endl;
    }
    else cout << "Unable to open file";
    return 0;
}