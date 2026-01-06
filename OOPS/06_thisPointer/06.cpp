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

//    Non-Parameterized constructor
Teacher() {
    cout<< "Hey,I am a non-parameterized constructor";
    dept="CS";
}

// Parameterized constructor
// If we want to change the name of our parameters then we write like this but this is confusing which is property and which is parameter values
    Teacher(string name,string dept,string subject,double salary) {
        cout<< "Hey,I am a parameterized constructor";
        // name=name;
        // dept=dept;
        // subject=subject;
        // salary=salary;

        //This differentiate between class properties(this->prop) and parameter values(name,dept,subject,salary)
        this->name=name;
        this->dept=dept;
        this->subject=subject;
        this->salary=salary;
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