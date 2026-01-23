#include <iostream>
using namespace std;

class DB;

class DM {
public:
    int meter, cm;

    void input() {
        cout << "Enter meter and cm: ";
        cin >> meter >> cm;
    }

    void display() {
        cout << "Distance = " << meter << " meters " << cm << " cm\n";
    }

    friend DM add(DM, DB);
};

class DB {
public:
    int feet, inch;

    void input() {
        cout << "Enter feet and inch: ";
        cin >> feet >> inch;
    }

    friend DM add(DM, DB);
};

DM add(DM d1, DB d2) {
    DM result;

    int totalCm = d1.meter * 100 + d1.cm;
    int totalInch = d2.feet * 12 + d2.inch;

    int inchToCm = totalInch * 2.54;

    int sumCm = totalCm + inchToCm;

    result.meter = sumCm / 100;
    result.cm = sumCm % 100;

    return result;
}

int main() {
    DM d1;
    DB d2;
    DM d3;

    d1.input();
    d2.input();

    d3 = add(d1, d2);

    d3.display();

    return 0;
}
