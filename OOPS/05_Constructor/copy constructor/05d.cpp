#include<iostream>
using namespace std;
  

// Shallow copy constructor
class Student {
    public:
    // This properties are running on statically allocated memory,all this was created in stack memory thus we will not store grade directly but we will convert the value of grade into pointer 
     string name;
    //  double grade;
    // This is grade pointer 
    double* gradePtr;


     Student(string name,double grade){
        this->name=name;
        // this->grade=grade;
        // Now we will allocate new memory to the grade pointer.Previously the pointer wasn't pointing anywhere inside memory but now we made it point to a special type of memory i.e double type memory which can store float type data & this new dynamically allocated memory is inside our heap
        gradePtr = new double;
        // Now the grade pointer which it was pointing to(the memory address) by dereferencing it we have stored the grade
        *gradePtr = grade;
     }

     Student(Student &obj){
        this->name=obj.name;
        this->gradePtr=obj.gradePtr;
     }

     void getInfo() {
        cout<<"Name : "<<name<<endl;
        cout<<"Grade : "<<*gradePtr<<endl;
     }
};

int main(){
   Student s1("Alex",8.9);
//    s1.getInfo();

   s1.getInfo(); //Prints the s1 values
// We want to copy the data of s1 to s2
   Student s2(s1);
   *(s2.gradePtr) = 9.2;
//    s2.getInfo();
     s1.getInfo(); //Prints the changed grade value & this happened cause of dynamically allocated memory cause of shallow copy 

    return 0;
}

