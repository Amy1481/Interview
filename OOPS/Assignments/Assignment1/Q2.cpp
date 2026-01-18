#include<iostream>
using namespace std;

void swapNumbers(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main() {
    int x,y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    swapNumbers(x,y);
    cout << "The value of x is " << x << "& y is " << y;
    return 0;
}