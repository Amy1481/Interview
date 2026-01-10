#include<iostream>
using namespace std;

class Parent {
    private: 
      int a;

    protected:
      int b;

    public: 
       int c;
       void set() {
         a=10;
         b=20;
         c=30;
       }

       void show() {
        cout << a << b << c << endl;
       }
};

class Child : public Parent {
    public:
      void access() {
        a=10;
        b=20;
        c=30;
      }
};

int main() {
    Parent p1;

    p1.set();
    p1.show();
    
    p1.a=5;
    p1.b=10;
    p1.c=10;

    cout << p1.c;
    

    return 0;
}