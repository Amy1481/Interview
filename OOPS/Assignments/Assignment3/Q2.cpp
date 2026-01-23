#include <iostream>
using namespace std;

class Product {
    string name;
    float price;

    static int totalProducts;
    static float totalPrice;

public:
    Product(string n, float p) {
        name = n;
        price = p;
        totalProducts++;
        totalPrice += price;
    }

    static void averagePrice() {
        cout << "Average Price = " << totalPrice / totalProducts << endl;
    }
};

int Product::totalProducts = 0;
float Product::totalPrice = 0;

int main() {
    Product p1("Mouse", 500);
    Product p2("Keyboard", 1500);
    Product p3("Monitor", 12000);

    Product::averagePrice();

    return 0;
}
