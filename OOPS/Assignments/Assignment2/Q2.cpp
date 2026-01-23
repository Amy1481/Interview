#include<iostream>
using namespace std;

class BankAcct{
    string name;
    int acctNumber;
    string acctType;
    double balance;

    public:
     void input() {
        cout << "Enter your name: " << name << endl;
        cout << "Enter your account number: " << acctNumber << endl;
        cout << "Enter your account type: " << acctType << endl;
        cout << "Enter your balance: " << balance << endl;
     }
     void deposit(double amount){
        balance=amount;
        cout << "Amount " << amount << "deposited successfully" << endl;
     }
     void withdraw(double amount){
        if(amount>balance){
            cout << "Insufficient balance" << endl;
        }
        else{
            balance-=amount;
            cout << "Amount " << amount << "withdrawn successfully" << endl;
        }
     }
     void display() {
        cout << "Name: " << name << endl; 
        cout << "Account number: " << acctNumber << endl;
        cout << "Account type: " << acctType << endl;
        cout << "Balance: " << balance << endl;
     }
}


int main() {
    BankAcct b1[10];
    for(int i=0;i<10;i++){
        b[i].input();
    }

    return 0;
}