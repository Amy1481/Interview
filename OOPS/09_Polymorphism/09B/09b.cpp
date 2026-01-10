// Virtual Functions
#include<iostream>
using namespace std;

class Parent {
 public: 
  // function 1
  void getInfo() {
    cout << "Parent class\n";
  }    

//   Virtual function
  virtual void hello() {
    cout << "Hello from parent class\n";.
  }
};

class Child : public Parent {
    public: 
     // function 2
    void getInfo() {
       cout << "Child class\n";
    }    

    // Redefined/Reimplement Virtual function
    void hello() {
      cout << "Hello from child class\n";.
    }
};

int main() {
    Child c1;
    // It overrides the virtual function of parent class and prints child class redefined virtual function 
    c1.hello();

   

    return 0;
}