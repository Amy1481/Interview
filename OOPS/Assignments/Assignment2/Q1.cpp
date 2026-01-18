#include<iostream>
using namespace std;

class BankAcct {
    string name;
    int acctNumber;
    string acctType;
    double balance;

    public:
     void assignVal(string n,int an,string at,double b){
        name=n;
        acctNumber=an;
        acctType=at;
        balance=b;
     }
     void deposit(double amount) {
        balance+=amount;
        cout << "Amount deposited successfully" << endl;
     }
     void withdrawal(double amount){
        if(amount>balance){
            cout << "Insufficient balance";
        }
        else{
            balance-=amount;
            cout << "Amount withdrawn successfully" << endl;
        }
     }
     void display(){
        cout << "Name: " << name << "\nBalance: " << balance << endl;
     }
};


int main() {
    BankAcct b1;
    b1.assignVal("Amy",1233132,"Savings",6437);
    b1.deposit(300000);
    b1.withdrawal(13000);
    b1.display();
    return 0;
}