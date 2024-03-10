#include<iostream>
#include<string>
using namespace std;

class Dog{
    public:
    string name;
    string breed;
    int age;

    Dog(string name, string breed, int age)
    {
        this->name = name;
        this-> breed = breed;
        this->age = age;
    }

    void eat()
    {
        cout<<name<<"is eating."<<endl;
    }
    void dogBreed()
    {
        cout<<"brred is: :"<<breed<<endl;
    }
};

class GoldenRetriever : public Dog
{
    public:
    GoldenRetriever(string name, int age) : Dog(name, "Golden Retriever", age){}

    void feth()
    {
        cout<<name<<" is fetching ball "<<endl;
    }
};

int main()
{
    Dog myDog("Dog", "Goldern", 3);
    Dog myDog2("Dog2", "German", 5);

    GoldenRetriever mygol("Buddy", 69);

    myDog.eat();
    myDog2.eat();

    myDog.dogBreed();
    myDog2.dogBreed();
    mygol.feth();
}