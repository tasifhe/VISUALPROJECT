// find the shortest word in a file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
string shortestWord = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
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
if (word.size() < shortestWord.size()){
shortestWord = word;
}
word = "";
}
}
if (word.size() < shortestWord.size()){
shortestWord = word;
}
}
myfile.close();
cout << "Shortest word in file: " << shortestWord << endl;
} else cout << "Could not open file." << endl;
}