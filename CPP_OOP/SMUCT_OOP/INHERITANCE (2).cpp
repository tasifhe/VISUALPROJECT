#include<bits/stdc++.h>
using namespace std;

class Vehicle{
    public:
    void run()
    {
        cout<<"Can run"<<endl;
    }
    private:
    void carry()
    {
        cout<<"Can carry"<<endl;
    }
    public:
        void useCarry()
        {
            carry();
        }
};

class Car : public Vehicle{
    public:
    void drift()
    {
        cout<<"Can drift"<<endl;
    }
    protected:
    void AC()
    {
        cout<<"Has Air Condition"<<endl;
    }

    public:
    void useAC()
    {
        AC();
    }
};

int main()
{
    Car obj;
    obj.drift();
    obj.run();
    obj.useCarry();
    obj.useAC();
}
