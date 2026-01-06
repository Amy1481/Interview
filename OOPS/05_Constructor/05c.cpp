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
// Teacher() {
//     cout<< "Hey,I am a non-parameterized constructor";
//     dept="CS";
// }


// Parameterized constructor
    Teacher(string n,string d,string sub,double sal) {
        cout<< "Hey,I am a parameterized constructor";
        // name=n;
        // dept=d;
        // subject=sub;
        // salary=sal;

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


// Copy constructor
// We will create Teacher constructor and inside the constructor we will basically have Teacher type object and this object we will pass it by reference 
    Teacher(Teacher &orgObj){ //Pass by reference means call by value call by reference in c++ functions i.e the Teacher &orgObj is not the copy of the original object but it is the original object itself which means address of original object is passed thus any changes in this constructor will be reflected inside the original object
        cout << "Hey I am custom copy constructor\n";
        this->name=orgObj.name;
        this->dept=orgObj.dept;
        this->subject=orgObj.subject;
        this->salary=orgObj.salary;
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
    // Teacher t2(); //Again calls constructor
    // t1.name="Amy";
    // t1.dept="CS";
    // t1.subject="OOPs";
    // t1.setSalary(25000);

    // cout<< t1.name << endl;
    // cout<<t1.dept;
    // Instead of calling each property indivisually
    // t1.getInfo();

    // Copy Constructor(Default)
    // Copies the same properties & values as t1
    Teacher t2(t1); //default copy constructor invoked/called
    t2.getInfo();
    return 0;
}

