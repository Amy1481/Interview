// WAP to design a system that stores all the information like name,dept,subject & salary about all the teachers
#include <iostream>
using namespace std;

// Class creation
class Teacher{
    // Properties/Attributes
    string name;
    string dept;
    string subject;
    double salary;


    // Methods/Member functions(as they are the member of this class)
    void changeDept(string newDept) {
        dept = newDept;
    }
};

int main() {
    // Object creation
    Teacher t1;
   // For any object if we want to assign any value i.e we want to access its properties so we use dot operator

   //To access the object property for example
    // t1.name;
    // t1.dept;
    // t1.subject;
    // t1.salary;

    // To give value to the object property
    // t1.name="Amy";
    // t1.dept="Computer Science";
    // t1.subject="C++";
    // t1.salary=25000;

    // To display the object we can cout
    // cout<<t1.name<<endl;
    // cout<<t1.dept="Computer Science"<<endl;
    // cout<<t1.subject="C++"<<endl;
    // cout<<t1.salary=25000<<endl;

    // But when we run this properties then we get error as all this properties are private data members of class Teacher 



    // To access methods 
    // t1.changeDept();


    return 0;
}