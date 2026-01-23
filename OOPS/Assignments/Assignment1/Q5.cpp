#include <iostream>
using namespace std;

double power(double m, int n = 2) {
    double result = 1;
    for (int i = 1; i <= n; i++) {
        result *= m;
    }
    return result;
}

int main() {
    double m;
    int n;

    cout << "Enter value of m: ";
    cin >> m;
    cout << "Enter value of n: ";
    cin >> n;

    cout << "m^n = " << power(m, n) << endl;
    cout << "Square of m = " << power(m) << endl;

    return 0;
}
