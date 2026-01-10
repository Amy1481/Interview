#include<iostream>
using namespace std;
// Syntax to write abstract class
// abstract class Shape {

// };

class Shape { //The class having pure virtual function is automatically an abstract class
    virtual void draw() = 0; //This is pure virtual function as we have defined value 0 to it.
};

//Now we have created a class that inherits properties from abstract class shape 
class Circle : public Shape {
    public:
      void draw() {
        cout << "Drawing a circle\n";
      }
};

//Now we have created a class that inherits properties from abstract class shape 
class Square : public Shape {
    public:
      void draw() {
        cout << "Drawing a square\n";
      }
};

int main() {
    // This will show error as it is an abstract class thus it cannot create objects.
    // Shape s1; 

    Circle c1;
    c1.draw();

    Square sq1;
    sq1.draw();

    return 0;
}