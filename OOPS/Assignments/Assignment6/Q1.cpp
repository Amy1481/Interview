#include <iostream>
using namespace std;

class Shape {
protected:
    double x, y;

public:
    void getData(double a, double b) {
        x = a;
        y = b;
    }

    virtual void displayArea() {
        cout << "Area not defined\n";
    }
};

class Rectangle : public Shape {
public:
    void displayArea() {
        cout << "Area of Rectangle = " << x * y << endl;
    }
};

class Triangle : public Shape {
public:
    void displayArea() {
        cout << "Area of Triangle = " << 0.5 * x * y << endl;
    }
};

int main() {
    Shape *s;
    Rectangle r;
    Triangle t;

    r.getData(10, 5);
    t.getData(10, 5);

    s = &r;
    s->displayArea();

    s = &t;
    s->displayArea();

    return 0;
}
