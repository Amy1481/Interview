#include <iostream>
#include <cstring>
using namespace std;

class String {
    char str[100];

public:
    String(const char s[] = "") {
        strcpy(str, s);
    }

    bool operator==(String s) {
        return strcmp(str, s.str) == 0;
    }
};

int main() {
    String s1("Hello");
    String s2("Hello");

    if (s1 == s2)
        cout << "Strings are equal";
    else
        cout << "Strings are not equal";

    return 0;
}
