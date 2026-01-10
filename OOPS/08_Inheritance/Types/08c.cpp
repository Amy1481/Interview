//3.Multiple inheritance
#include<iostream>
using namespace std;

// Parent class A
class Student {
    // Name,age,rollNo
    public:
     string name;
     int rollNo;
};

// Parent class B
class Teacher {
    public:
     string subject;
     double salary;
};

// Child class 
class TA : public Student,public Teacher {

}

int main() {
   TA t1;
   t1.name="Amy";
   11.subject="CS";

   cout << t1.name << endl;
   cout << t1.subject << endl;

    return 0;
}