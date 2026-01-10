#include<iostream>
using namespace std;

class Person {
    public:
     string name;
     int age;

     Person(string name,int age){
        this->name = name;
        this->age = age;
     }

    ~Person() {
        cout << "Person destructor";
     }
};

// We are using private access modifiers thus it will show error
class Student : private Person {
    // Name,age,rollNo
    public:
     int rollNo;

     Student(string name,int age,int rollNo) : Person(name,age) {
        this->rollNo = rollNo;
     }

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
    Student s1("Amy",21,1234);
    s1.getInfo();

    return 0;
}