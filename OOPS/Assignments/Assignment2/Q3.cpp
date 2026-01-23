#include<iostream>
using namespace std;

class Employee {
    int salary;
    int workHrs;
    void addSal();
    void addWork();

    public:
    void getInfo();
    void display();

};
void Employee :: getInfo() {
    cout << "Enter salary & work works: " <<endl;
    cin >> salary >> workHrs;
}

void Employee :: addSal() {
    if(salary < 5000){
        salary+=1000;
    }
}

void Employee :: addWork() {
    if(workHrs>6){
        salary+=500;
    }
}

void Employee :: display(){
    addSal();
    addWork();
    cout << "Salary: " << salary << endl << "Work hours: " << workHrs << endl;
}



int main() {
    Employee E1;
    E1.getInfo();
    E1.display();
    return 0;
}