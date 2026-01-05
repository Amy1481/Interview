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
};

int main(){
    Teacher t1;
    t1.name="Amy";
    t1.dept="CS";
    t1.subject="OOPs";
    t1.setSalary(25000);

    cout<< t1.name << endl;
    cout<< t1.getSalary() << endl;
    return 0;
}