#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    static Complex addComplex(Complex a, Complex b) {
        Complex c;
        c.real = a.real + b.real;
        c.imag = a.imag + b.imag;
        return c;
    }

    void display() {
        cout << real << " + j" << imag << endl;
    }
};

int main() {
    Complex A(3.12, 5.65);
    Complex B(2.75, 1.21);

    Complex C = Complex::addComplex(A, B);

    cout << "A = ";
    A.display();

    cout << "B = ";
    B.display();

    cout << "C = ";
    C.display();

    return 0;
}

