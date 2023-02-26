// replace all occurrences of a word in a file with another word
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
string line = "";
string word = "file";
string newWord = "FILE";
ifstream myfile;
myfile.open("001_example.txt", ios::in);
if (myfile.is_open()){
while(getline(myfile, line)){
string word = "";
for (int i = 0; i < static_cast<int>(line.size()); i++){
if(line[i] != ' '){
word += line[i];
}
else{
if (word == "this"){
word = "THIS";
}
cout << word << " ";
word = "";
}
}
(word == "this") ? cout << "THIS" : cout << word;
cout << endl;
}
myfile.close();
}
else cout << "Could not open file." << endl;
}