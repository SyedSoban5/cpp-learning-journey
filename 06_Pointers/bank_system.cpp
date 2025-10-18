#include <iostream>
#include <string>
using namespace std;

struct Account {
    string name;
    int accountNo;
    double balance;
};

int main() {
    int n;
    cout << "Enter number of accounts: ";
    cin >> n;

    Account* accounts = new Account[n];

    // Input account data
    for (int i = 0; i < n; i++) {
        cin.ignore();
        cout << "Enter name for account " << i + 1 << ": ";
        getline(cin, accounts[i].name);
        cout << "Enter account number: ";
        cin >> accounts[i].accountNo;
        cout << "Enter initial balance: ";
        cin >> accounts[i].balance;
    }

    // Deposit example
    int accIndex;
    double depositAmount;
    cout << "\nEnter account number to deposit: ";
    cin >> accIndex;
    cout << "Enter amount: ";
    cin >> depositAmount;
    accounts[accIndex-1].balance += depositAmount;

    // Display accounts
    cout << "\n--- Accounts ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Name: " << accounts[i].name
             << ", Account No: " << accounts[i].accountNo
             << ", Balance: $" << accounts[i].balance << endl;
    }

    delete[] accounts;
    return 0;
}
