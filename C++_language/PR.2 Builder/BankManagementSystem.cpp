#include <iostream>
using namespace std;

class Bank {
    string accountNumber;
    string accountHolderName;
    double balance;

public:
    Bank(string number, string name, double initialBalance) {
        this->accountNumber = number;
        this->accountHolderName = name;
        this->balance = initialBalance;
    }

    void deposit(double amount) {
        balance = balance + amount;
        cout << "Deposit of " << amount << " successful. New balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance = balance - amount;
            cout << "Withdrawal of " << amount << " successful. New balance: " << balance << endl;
        } else {
            cout << "Insufficient balance. Withdrawal failed." << endl;
        }
    }

    void displayBalance() {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() 
{
    Bank myAccount("123456789", "Bhavya Nagar", 1000.0);

    myAccount.displayBalance();
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);

    return 0;
}

