// Static object
#include<iostream>
using namespace std;

class ABC {
    public:
      ABC() {
        cout << "Constructor\n";
      }
      ~ABC() {
        cout << "Destructor\n";
      }
};


int main() {
    if(true) {
        // ABC obj; //First constructor is called then destructor is called then end of main function is called
    }
        static ABC obj; //Now constructor is called then end of main function then destructor is called
    }
    cout << "End of main function\n";

    return 0;
}