#include<iostream>
using namespace std;

// Normal function
void fun() {
    // int x=0;
    static int x=0; //this initialization statement runs only once  & the other two keep running
    cout <<"x: " << x << endl;
    x++; 
}

int main() {
    // call fun function
    fun(); //0
    fun(); //0
    fun(); //0
    // The output will always be the same, it will always be zero.Because as we call the function then inside our call stack, fun function comes & x variable is created as 0 then it gets deleted then again we call fun() x=0 then again we delete it

    // If we use static keyword in front of int x then it creates our x somewhere else in the memory not inside call stack and if we do increment it increases the value of x and deletes creates the function only

    return 0;
}