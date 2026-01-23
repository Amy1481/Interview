#include <iostream>
#include <cstring>
using namespace std;

class String {
    char str[100];

public:
    // Default constructor
    String() {
        strcpy(str, "");
    }

    // Parameterized constructor
    String(const char s[]) {
        strcpy(str, s);
    }

    // Function to add two strings
    String add(String s) {
        String temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }

    void display() {
        cout << str << endl;
    }
};

int main() {
    String s1;                  // uninitialized (empty)
    String s2("Well done!");     // initialized with constant

    String s3 = s1.add(s2);      // concatenation

    cout << "String 1: ";
    s1.display();

    cout << "String 2: ";
    s2.display();

    cout << "Concatenated String: ";
    s3.display();

    return 0;
}
