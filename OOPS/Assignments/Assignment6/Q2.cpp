#include <iostream>
using namespace std;

class Shape {
protected:
    double x, y;

public:
    void getData(double a, double b = 0) {
        x = a;
        y = b;
    }

    virtual void displayArea() {}
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

class Circle : public Shape {
public:
    void displayArea() {
        cout << "Area of Circle = " << 3.14 * x * x << endl;
    }
};

int main() {
    Shape *s;
    Rectangle r;
    Triangle t;
    Circle c;

    r.getData(10, 5);
    t.getData(10, 5);
    c.getData(7);

    s = &r;
    s->displayArea();

    s = &t;
    s->displayArea();

    s = &c;
    s->displayArea();

    return 0;
}
