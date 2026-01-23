#include <iostream>
#include <cmath>
using namespace std;

class Polar {
    float r, a;   // radius and angle (in radians)

public:
    Polar(float radius = 0, float angle = 0) {
        r = radius;
        a = angle;
    }

    Polar operator+(Polar p) {
        // Convert both to rectangular
        float x1 = r * cos(a);
        float y1 = r * sin(a);

        float x2 = p.r * cos(p.a);
        float y2 = p.r * sin(p.a);

        // Add rectangular coordinates
        float x = x1 + x2;
        float y = y1 + y2;

        // Convert back to polar
        float result_r = sqrt(x * x + y * y);
        float result_a = atan(y / x);

        return Polar(result_r, result_a);
    }

    void display() {
        cout << "Radius = " << r << " Angle = " << a << endl;
    }
};

int main() {
    Polar p1(5, 0.5);
    Polar p2(4, 0.8);

    Polar p3 = p1 + p2;

    cout << "Resultant Polar Coordinate:\n";
    p3.display();

    return 0;
}
