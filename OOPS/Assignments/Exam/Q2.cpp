#include <iostream>
using namespace std;

class Liquid {
    int liter, ml;

public:
    // Parameterized constructor
    Liquid(int l = 0, int m = 0) {
        liter = l;
        ml = m;

        // Convert extra ml to liter
        if (ml >= 1000) {
            liter += ml / 1000;
            ml = ml % 1000;
        }
    }

    // Overload + operator
    Liquid operator+(Liquid L) {
        int totalLiter = liter + L.liter;
        int totalMl = ml + L.ml;

        return Liquid(totalLiter, totalMl);
    }

    void show() {
        cout << liter << " liter " << ml << " ml" << endl;
    }
};

int main() {
    Liquid L1(2, 750);
    Liquid L2(1, 500);

    cout << "Liquid 1: ";
    L1.show();

    cout << "Liquid 2: ";
    L2.show();

    Liquid L3 = L1 + L2;

    cout << "After Addition: ";
    L3.show();

    return 0;
}
