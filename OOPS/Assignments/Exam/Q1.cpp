#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
};

class Employee : public Person {
protected:
    string dept;
};

class Businessman : public Person {
protected:
    string business_name;
};

class PersonDetails : public Employee, public Businessman {
    float annual_income;

public:
    void input() {
        cout << "Enter Name: ";
        cin >> Employee::name;

        cout << "Enter Age: ";
        cin >> Employee::age;

        cout << "Enter Department: ";
        cin >> dept;

        cout << "Enter Business Name: ";
        cin >> business_name;

        cout << "Enter Annual Income: ";
        cin >> annual_income;
    }

    void display() {
        cout << "\nPerson Details\n";
        cout << "Name: " << Employee::name << endl;
        cout << "Age: " << Employee::age << endl;
        cout << "Department: " << dept << endl;
        cout << "Business Name: " << business_name << endl;
        cout << "Annual Income: " << annual_income << endl;
    }
};

int main() {
    PersonDetails p;
    p.input();
    p.display();

    return 0;
}
