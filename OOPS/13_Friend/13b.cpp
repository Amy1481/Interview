// Friend function
#include<iostream>
using namespace std;

// Global function(function outside the class can be accessed by all the classes)
void show(Box a) {
    cout << a.length << endl;
}

class X {
    private:
      int length=10;
      friend void show(Box);
};

int main() {
    return 0;
}