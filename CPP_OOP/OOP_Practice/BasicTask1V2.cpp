#include<iostream>
#include<string>
#include <unordered_map>
using namespace std;

class BankAccount {
    private:
        double balance;
        string accountNumber;
        string accountHolderName;
    public:
        BankAccount(double b, string acctNum, string acctHolder) : balance(b), accountNumber(acctNum), accountHolderName(acctHolder) {}

        bool deposit(double amount) {
            if(amount > 0){
                balance += amount;
                return true;
            }
            cout << "Invalid deposit amount." << endl;
            return false;
        }

        bool withdraw(double amount) {
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                return true;
            }
            cout << "Invalid withdraw amount." << endl;
            return false;
        }

        double getBalance() {
            return balance;
        }

        string getAccountNumber() {
            return accountNumber;
        }

        string getAccountHolderName() {
            return accountHolderName;
        }
};

int main() {
    unordered_map<string, BankAccount> bankAccounts;
    string acctNum, acctHolder;
    double amount;
    int option;
    while (true) {
        cout << "What would you like to do?\n1. Open account\n2. Withdraw\n3. Deposit\n4. Check balance\n5. Close account\n6. Exit\nEnter option: ";
        cin >> option;
        if (option == 1) {
            cout << "Enter account number: ";
            cin >> acctNum;
            cout << "Enter account holder name: ";
            cin >> acctHolder;
            cout << "Enter initial deposit: ";
            cin >> amount;
            bankAccounts[acctNum] = BankAccount(amount, acctNum, acctHolder);
            cout << "Account created successfully.\n" << endl;
        } else if (option == 2) {
            cout << "Enter account number: ";
            cin >> acctNum;
            if (bankAccounts.count(acctNum) == 0) {
                cout << "Account not found.\n" << endl;
            } else {
                cout << "Enter the amount to be withdrawn: ";
                cin >> amount;
                if (bankAccounts[acctNum].withdraw(amount)) {
                    cout << "Withdrawal successful. New balance: " << bankAccounts[acctNum].getBalance() << endl;
                } else {
                    cout << "Transaction failed." << endl;
                }
            }
        } else if (option == 3) {
            cout << "Enter account number: ";
            cin >> acctNum;
            if (bankAccounts.count(acctNum) == 0) {
                cout << "Account not found.\n" << endl;
            } else {
                cout << "Enter the amount to be deposited: ";
                cin >> amount;
                                if (bankAccounts[acctNum].deposit(amount)) {
                    cout << "Deposit successful. New balance: " << bankAccounts[acctNum].getBalance() << endl;
                } else {
                    cout << "Transaction failed." << endl;
                }
            }
        } else if (option == 4) {
            cout << "Enter account number: ";
            cin >> acctNum;
            if (bankAccounts.count(acctNum) == 0) {
                cout << "Account not found.\n" << endl;
            } else {
                cout << "Account holder: " << bankAccounts[acctNum].getAccountHolderName() << endl;
                cout << "Balance: " << bankAccounts[acctNum].getBalance() << endl;
            }
        } else if (option == 5) {
            cout << "Enter account number: ";
            cin >> acctNum;
            if (bankAccounts.count(acctNum) == 0) {
                cout << "Account not found.\n" << endl;
            } else {
                bankAccounts.erase(acctNum);
                cout << "Account closed successfully." << endl;
            }
        } else if (option == 6) {
            break;
        } else {
            cout << "Invalid option" << endl;
        }
    }
    return 0;
}

