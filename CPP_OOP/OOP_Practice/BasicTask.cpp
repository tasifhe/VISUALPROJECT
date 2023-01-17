#include<iostream>
using namespace std;

class BankAccount{
    double Balance;
    public:
    BankAccount(double b)
    {
        Balance=b;
    }
    void Deposit(double amount)
    {
        Balance+=amount;
    }
    void Withdraw(double amount)
    {
        if(amount>Balance)
        {
            cout<<"Insufficient Balance";
        }
        else
        {
            Balance-=amount;
        }
    }
    double GetBalance()
    {
        return Balance;
    }
};

int main()
{
    double amount;
    cout<<"Enter the amount to be deposited: ";
    cin>>amount;
    BankAccount Bal(amount);
    cout<<"Enter the amount to be withdrawn: ";
    cin>>amount;
    Bal.Withdraw(amount);
    if(Bal.GetBalance()>0)
    {
        cout<<"Balance: "<<Bal.GetBalance();
    }
    else
    {
        cout<<"Insufficient Balance";
    }
    return 0;
}