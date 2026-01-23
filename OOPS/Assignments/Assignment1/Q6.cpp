#include <iostream>
using namespace std;

double power(double m, int n = 2) {
    double result = 1;
    for (int i = 1; i <= n; i++)
        result *= m;
    return result;
}

int power(int m, int n = 2) {
    int result = 1;
    for (int i = 1; i <= n; i++)
        result *= m;
    return result;
}

int main() {
    double a;
    int b;

    cout << "Enter double value: ";
    cin >> a;
    cout << "Enter integer value: ";
    cin >> b;

    cout << "Double power: " << power(a, 3) << endl;
    cout << "Int power: " << power(b, 3) << endl;

    return 0;
}
