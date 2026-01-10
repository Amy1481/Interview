// 4.Hierarchial Inheritance
#include<iostream>
using namespace std;

// Parent class A
class Person {
    public:
     string name;
     int age;
};

// Child class B inherited from class A
class Student : public Person {
    public:
     int rollNo;
};

// Child class C inherited from class A
class Teacher : public Person {
    public:
     string subject;
     double salary;
}

int main() {

    return 0;
}