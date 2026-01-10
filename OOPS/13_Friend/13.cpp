// Friend class
#include<iostream>
using namespace std;
class X {
    private:
     int a=5;

    //  Class Y  is defined as friend of class X thus it can access private & protected members of class X
     friend class Y;
};

class Y {
    public:
    // This is a function that creates an object of X class and accesses the private data member a 
     void show(X obj) {
        cout << obj.a << endl;
     }
};

int main() {
    return 0;
}