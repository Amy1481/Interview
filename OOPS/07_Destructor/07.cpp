#include<iostream>
using namespace std;
  

// Shallow copy constructor
class Student {
    public:
     string name;
    double* gradePtr;


     Student(string name,double grade){
        this->name=name;
        // we allocated this new memory so we need to deallocated this memory by creating a destructor
        gradePtr = new double;
        *gradePtr = grade;
     }

    //  Destructor
    // Same name as class just add ~ at the start & as constructor is called automatically destructor also called automatically by the console even if we don't we our own destructor
    ~Student() {
        cout<<"Hey, I'm deleting everything";
        // The normal variables are free but to delete ptr we have to write
        delete gradePtr;  
        // If we don't delete this pointer then we face many problems such as memory leak meaning we have created a lot of memory in heap now no pointer is pointing to those memories and those memories can't be used for other uses thus memory gets wasted
    }

     void getInfo() {
        cout<<"Name : "<<name<<endl;
        cout<<"Grade : "<<*gradePtr<<endl;
     }
};

int main(){
   Student s1("Alex",8.9);
   s1.getInfo();

    return 0;
}

