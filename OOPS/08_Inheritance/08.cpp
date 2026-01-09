#include<iostream>
using namespace std;

class Person {
    public:
     string name;
     int age;

// To call this parameterized constructor we manually call it 
     Person(string name,int age){
        this->name = name;
        this->age = age;
     }

    //  Non-parameterized constructor
    // Person() {
    //     cout << "Parent constructor\n";
    // } 

    ~Person() {
        cout << "Person destructor";
     }
};

// Inherited class Student from class parent class A.To write properties we have to write : access modifiers Parent classname  
// We should public so that our properties of Person class will be inherited in student class
class Student : public Person {
    // Name,age,rollNo
    public:
     int rollNo;

    //  To call the parameterized constructor student first calls person class's constructor then it calls it's own constructor
     Student(string name,int age,int rollNo) : Person(name,age) {
        this->rollNo = rollNo;
     }

// For non-parameterized constructor
    //  Student() {
    //     cout << "Child constructor\n";
    //  }

     ~Student() {
        cout << "Child destructor";
     }

     void getInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollNo << endl;
     }
};

int main() {
    Student s1;
    s1.name="Amy";
    s1.age=21;
    s1.rollNo=1234;

    s1.getInfo();

    return 0;
}