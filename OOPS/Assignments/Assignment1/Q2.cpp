#include<iostream>
using namespace std;

void swapNumbers(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main() {
    int x,y;
    cout << "Enter two numbers: "<< endl;
    cin >> x >> y;
    cout << "The initial value of x is " << x << " & y is " << y << endl;

    swapNumbers(x,y);
    cout << "After swap, the value of x is " << x << " & y is " << y << endl;
    return 0;
}