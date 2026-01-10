// Function overriding
#include<iostream>
using namespace std;

class Parent {
 public: 
  // function 1
  void getInfo() {
    cout << "Parent class\n";
  }    
};

// The child class publicly inherits the parent class 
class Child : public Parent {
    public: 
     // function 2
    void getInfo() {
       cout << "Child class\n";
     }    
   };

int main() {
    Child c1;
    // When we call the getInfo() function of child class it overrides the getInfo() function of parent class
    c1.getInfo();

    // Similarly if we call parent class getInfo() then it will override getInfo() function of child class
    // Parent p1;
    // p1.getInfo();

    return 0;
}