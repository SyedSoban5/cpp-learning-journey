// ------------------------------------------------------------
// File: bank_account_system.cpp
// Topic: Inheritance & Member Functions
// Description: Simulates a simple banking system with Accounts,
//              SavingsAccount and CurrentAccount using inheritance.
// ------------------------------------------------------------

#include <iostream>
using namespace std;

// Base class
class Account
{
protected:
    string holderName;
    double balance;

public:
    Account(string name, double bal)
    {
        holderName = name;
        balance = bal;
    }

    virtual void display()
    {
        cout << "Holder Name: " << holderName << endl;
        cout << "Balance    : $" << balance << endl;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited $" << amount << ". New Balance: $" << balance << endl;
    }

    void withdraw(double amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
            cout << "Withdrawn $" << amount << ". Remaining Balance: $" << balance << endl;
        }
        else
            cout << "Insufficient Balance!" << endl;
    }
};

// Derived class - Savings Account
class SavingsAccount : public Account
{
private:
    double interestRate;

public:
    SavingsAccount(string name, double bal, double rate)
        : Account(name, bal)
    {
        interestRate = rate;
    }

    void addInterest()
    {
        balance += balance * interestRate / 100;
        cout << "Interest added. New Balance: $" << balance << endl;
    }

    void display()
    {
        cout << "--- Savings Account ---\n";
        Account::display();
        cout << "Interest Rate: " << interestRate << "%\n";
    }
};

// Derived class - Current Account
class CurrentAccount : public Account
{
private:
    double overdraftLimit;

public:
    CurrentAccount(string name, double bal, double limit)
        : Account(name, bal)
    {
        overdraftLimit = limit;
    }

    void withdraw(double amount)
    {
        if (balance + overdraftLimit >= amount)
        {
            balance -= amount;
            cout << "Withdrawn $" << amount << ". Remaining Balance: $" << balance << endl;
        }
        else
            cout << "Exceeded overdraft limit!" << endl;
    }

    void display()
    {
        cout << "--- Current Account ---\n";
        Account::display();
        cout << "Overdraft Limit: $" << overdraftLimit << endl;
    }
};

int main()
{
    SavingsAccount sa("Soban", 1000, 5);
    sa.display();
    sa.deposit(500);
    sa.addInterest();
    sa.withdraw(200);

    cout << "\n";

    CurrentAccount ca("Ali", 500, 200);
    ca.display();
    ca.withdraw(600);
    ca.withdraw(200);

    return 0;
}
