#include<iostream>
using namespace std;

// Encapsulation(Created a class which has declared properties & methods inside the class)
class Teacher {
private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    void changeDept(string newDept){
        dept=newDept;
    }

    void setSalary(double s){
        salary=s;
    }

    double getSalary() {
        return salary;
    }

//    Non-Parameterized constructor
    Teacher() {
        cout<< "Hey,I am a non-parameterized constructor";
        dept="CS";
    }
};

int main(){
    Teacher t1; //Constructor call
    Teacher t2; //Again calls constructor
    t1.name="Amy";
    // t1.dept="CS";
    t1.subject="OOPs";
    t1.setSalary(25000);

    cout<< t1.name << endl;
    cout<< t1.getSalary() << endl;
    cout<<t1.dept;
    return 0;
}