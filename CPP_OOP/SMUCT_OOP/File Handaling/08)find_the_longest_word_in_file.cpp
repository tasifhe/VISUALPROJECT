// find the longest word in a file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
string longestWord = "";
string line = "";
ifstream myfile;
myfile.open("001_example.txt", ios::in);
if (myfile.is_open()){
while(getline(myfile, line)){
string word = "";
for (int i = 0; i < static_cast<int>(line.size()); i++){
if (line[i] != ' '){
word += line[i];
}
else{
if (word.size() > longestWord.size()){
longestWord = word;
}
word = "";
}
}
if (word.size() > longestWord.size()){
longestWord = word;
}
}
myfile.close();
cout << "Longest word in file: " << longestWord << endl;
}
else cout << "Could not open file." << endl;
}