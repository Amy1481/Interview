#include<iostream>
using namespace std;

// Normal class
class Obj {
public:
  int x;

  void incX() {
    x=x+1;
  }
};

int main() {
    // Here A has its own x similarly B has its own x but if we static then it creates a different x separately that reflects both A obj and B obj values for x by updating the x values 
    Obj A;
    Obj B;

    A.x=100;
    A.x=200;

    cout << A.x << endl;
    cout << B.x << endl;

    return 0;
}