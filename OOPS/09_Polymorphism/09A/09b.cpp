

// Function overloading means we have 2 or more functions having same name in the same single class but different parameters(no of parameters different or type of parameters are different)
#include<iostream>
using namespace std;

class Print {
    public:
    //  Function 1
    void show(int x){
        cout << "int: " << x << endl;
    }

     //  Function 2
     void show(char ch){
        cout << "char: " << ch << endl;
    }
};

int main() {
  Print p1;
  p1.show(101);
  p1.show('&');

    return 0;
}