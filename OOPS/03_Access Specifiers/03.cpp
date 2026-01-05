#include<iostream>
using namespace std;

class Teacher{
private:
// We know it is by default private but we can also write like 
  //Properties 
  double salary;

public:
  string name;
  string dept;
  string subject;

  //Methods
  void changeDept(string newDept){
    dept=newDept;
  }   

//   If we want to print the salary then we can create a special function in public
// Setter function is used to set private values 
  void setSalary(double s){
    salary=s;
  }
// Getter function is used to get the values of private values
  double getSalary() {
    return salary;
  }
};

int main(){
    Teacher t1;
    t1.name="Amy";
    t1.dept="CS";
    t1.subject="OOPs";
    // t1.salary=25000;
    t1.setSalary(25000);

    cout<<t1.name<<endl;
    // cout<<t1.salary<<endl;
    cout<<t1.getSalary()<<endl;


    return 0;
}