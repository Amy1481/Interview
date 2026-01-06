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

// Parameterized constructor
// Now we will define some parameters thus insted of assigning values separately calling the object like t1.name="Amy";,t1.dept="CS";,t1.subject="OOPs";,t1.setSalary(25000); we place all the value in this one line for example taking parameters like string n,string d,string sub,double sal & then assign the parameters values to the object properties 
    Teacher(string n,string d,string sub,double sal) {
        cout<< "Hey,I am a parameterized constructor";
        name=n;
        dept=d;
        subject=sub;
        salary=sal;
    }

    // Now we will create new function i.e getInfo() that will cout all the information about our teacher
    void getInfo(){
       cout<<"Name : "<<name<<endl;
       cout<<"Department : "<<dept<<endl;

    } 
};

int main(){
    // We are not going to create values like this we will just pass them in t1's parenthesis 
    Teacher t1("Amy","CS","OOPs",25000); //Constructor call
    Teacher t2(); //Again calls constructor
    // t1.name="Amy";
    // t1.dept="CS";
    // t1.subject="OOPs";
    // t1.setSalary(25000);

    // cout<< t1.name << endl;
    // cout<<t1.dept;
    // Instead of calling each property indivisually
    t1.getInfo();
    return 0;
}