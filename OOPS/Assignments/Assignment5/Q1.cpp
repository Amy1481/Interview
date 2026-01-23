#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int id;

public:
    void getEmployee() {
        cout << "Enter name and ID: ";
        cin >> name >> id;
    }
};

class Salary : public Employee {
protected:
    float basic, da, hra;

public:
    void getSalary() {
        cout << "Enter Basic, DA, HRA: ";
        cin >> basic >> da >> hra;
    }
};

class Bonus : public Salary {
    float bonus;

public:
    void getBonus() {
        cout << "Enter Bonus: ";
        cin >> bonus;
    }

    void display() {
        float total = basic + da + hra + bonus;
        cout << "\nSalary Slip\n";
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Net Salary: " << total << endl;
    }
};

int main() {
    Bonus b;
    b.getEmployee();
    b.getSalary();
    b.getBonus();
    b.display();

    return 0;
}
