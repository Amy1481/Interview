#include <iostream>
using namespace std;

class Account {
protected:
    string name;
    int accNo;

public:
    void getAccount() {
        cout << "Enter name and account number: ";
        cin >> name >> accNo;
    }
};

class Transaction {
protected:
    float balance;

public:
    void getBalance() {
        cout << "Enter initial balance: ";
        cin >> balance;
    }

    void deposit(float amt) {
        balance += amt;
    }

    void withdraw(float amt) {
        if (amt <= balance)
            balance -= amt;
        else
            cout << "Insufficient balance\n";
    }
};

class Bank : public Account, public Transaction {
public:
    void display() {
        cout << "\nAccount Details\n";
        cout << "Name: " << name << endl;
        cout << "Account No: " << accNo << endl;
        cout << "Final Balance: " << balance << endl;
    }
};

int main() {
    Bank b;
    b.getAccount();
    b.getBalance();

    b.deposit(2000);
    b.withdraw(1000);

    b.display();

    return 0;
}
