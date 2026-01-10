//2.Multilevel inheritance parent->parent->child
#include<iostream>
using namespace std;

// Parent class A
class Person {
    public:
     string name;
     int age;
};

// Parent class B inherited from parent class A
class Student : public Person {
    // Name,age,rollNo
    public:
     int rollNo;
};

// Child class C inherited from parent class B
class GradStudents : public Student {
    public:
     string researchArea;
}

int main() {
   GradStudents s1;
   s1.name="Amy";
   s1.researchArea="CS";

   cout << s1.name << endl;
   cout << s1.researchArea << endl;

    return 0;
}