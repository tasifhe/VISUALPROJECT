//* count the number of words in a file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string line = "";
    int word_count = 0;
    ifstream myfile ("example01.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            int space_count = 0;
            for (int i = 0; i < static_cast<int>(line.size()); i++)
            {
                if (line[i] == ' ')
                {
                    space_count++;
                }
            }
            word_count += space_count + 1;
        }
        myfile.close();
        cout << "Number of words in file: " << word_count << endl;
    }
    else cout << "Unable to open file";
    return 0;
}