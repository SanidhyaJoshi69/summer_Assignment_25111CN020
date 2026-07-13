#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

using namespace std;

void clearInputBuffer() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

class BankAccount {
private:
    int accountNumber;
    string holderName;
    double balance;

    // Helper to clear input buffer
    void clearInputBuffer() {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

public:
    BankAccount() : accountNumber(0), holderName(""), balance(0.0) {}

    void setupAccount() {
        cout << "\n--- New Account Registration ---" << endl;
        cout << "Account Number: ";
        while (!(cin >> accountNumber)) {
            cout << "Invalid input. Enter numeric ID: ";
            clearInputBuffer();
        }
        clearInputBuffer();

        cout << "Holder Name: ";
        getline(cin, holderName);

        cout << "Initial Deposit: ";
        while (!(cin >> balance) || balance < 0) {
            cout << "Invalid balance. Enter a positive amount: ";
            clearInputBuffer();
        }
        cout << "Account registered successfully.\n";
    }

    void depositFunds() {
        double amount;
        cout << "Amount to deposit: ";
        if (cin >> amount && amount > 0) {
            balance += amount;
            cout << "Success. New balance: $" << fixed << setprecision(2) << balance << endl;
        } else {
            cout << "Transaction failed: Invalid amount.\n";
            clearInputBuffer();
        }
    }

    void withdrawFunds() {
        double amount;
        cout << "Amount to withdraw: ";
        if (cin >> amount) {
            if (amount <= balance && amount > 0) {
                balance -= amount;
                cout << "Withdrawal complete. Remaining: $" << fixed << setprecision(2) << balance << endl;
            } else {
                cout << "Transaction failed: Insufficient funds or invalid amount.\n";
            }
        } else {
            clearInputBuffer();
        }
    }

    void showDetails() const {
        cout << "\n--- Account Summary ---" << endl;
        cout << "Number : " << accountNumber << "\nName   : " << holderName 
             << "\nBalance: $" << fixed << setprecision(2) << balance << endl;
    }
};

int main() {
    BankAccount userAccount;
    int choice = 0;

    while (choice != 5) {
        cout << "\n--- Banking Portal ---\n1. Register\n2. Deposit\n3. Withdraw\n4. View Info\n5. Exit\nChoice: ";
        if (!(cin >> choice)) {
            clearInputBuffer();             
            continue;
        }

        switch (choice) {
            case 1: userAccount.setupAccount(); break;
            case 2: userAccount.depositFunds(); break;
            case 3: userAccount.withdrawFunds(); break;
            case 4: userAccount.showDetails(); break;
            case 5: cout << "System shutting down.\n"; break;
            default: cout << "Invalid option.\n";
        }
    }
    return 0;
}