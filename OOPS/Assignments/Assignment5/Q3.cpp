#include <iostream>
using namespace std;

class Staff {
protected:
    int code;
    string name;

public:
    void getStaff() {
        cout << "Enter Code and Name: ";
        cin >> code >> name;
    }

    void showStaff() {
        cout << "Code: " << code << endl;
        cout << "Name: " << name << endl;
    }
};

// ---------------- Teaching ----------------
class Teaching : public Staff {
protected:
    string subject, publication;

public:
    void getTeaching() {
        getStaff();
        cout << "Enter Subject and Publication: ";
        cin >> subject >> publication;
    }

    void showTeaching() {
        showStaff();
        cout << "Subject: " << subject << endl;
        cout << "Publication: " << publication << endl;
    }
};

// ---------------- NonTeaching ----------------
class NonTeaching : public Staff {
protected:
    string qualification;

public:
    void getNonTeaching() {
        getStaff();
        cout << "Enter Qualification: ";
        cin >> qualification;
    }

    void showNonTeaching() {
        showStaff();
        cout << "Qualification: " << qualification << endl;
    }
};

// ---------------- Officer ----------------
class Officer : public NonTeaching {
    string grade;

public:
    void getOfficer() {
        getNonTeaching();
        cout << "Enter Grade: ";
        cin >> grade;
    }

    void showOfficer() {
        showNonTeaching();
        cout << "Grade: " << grade << endl;
    }
};

// ---------------- Typist ----------------
class Typist : public NonTeaching {
protected:
    int speed;
};

// ---------------- Regular Typist ----------------
class RegularTypist : public Typist {
public:
    void getRegularTypist() {
        getNonTeaching();
        cout << "Enter Typing Speed: ";
        cin >> speed;
    }

    void showRegularTypist() {
        showNonTeaching();
        cout << "Typing Speed: " << speed << " wpm" << endl;
        cout << "Type: Regular Typist" << endl;
    }
};

// ---------------- Casual Typist ----------------
class CasualTypist : public Typist {
    float dailyWages;

public:
    void getCasualTypist() {
        getNonTeaching();
        cout << "Enter Typing Speed and Daily Wages: ";
        cin >> speed >> dailyWages;
    }

    void showCasualTypist() {
        showNonTeaching();
        cout << "Typing Speed: " << speed << " wpm" << endl;
        cout << "Daily Wages: " << dailyWages << endl;
        cout << "Type: Casual Typist" << endl;
    }
};

// ---------------- MAIN ----------------
int main() {
    Teaching t;
    Officer o;
    RegularTypist r;
    CasualTypist c;

    cout << "\n--- Enter Teaching Staff Details ---\n";
    t.getTeaching();

    cout << "\n--- Enter Officer Details ---\n";
    o.getOfficer();

    cout << "\n--- Enter Regular Typist Details ---\n";
    r.getRegularTypist();

    cout << "\n--- Enter Casual Typist Details ---\n";
    c.getCasualTypist();

    cout << "\n===== EMPLOYEE DATABASE =====\n";

    cout << "\n--- Teaching Staff ---\n";
    t.showTeaching();

    cout << "\n--- Officer ---\n";
    o.showOfficer();

    cout << "\n--- Regular Typist ---\n";
    r.showRegularTypist();

    cout << "\n--- Casual Typist ---\n";
    c.showCasualTypist();

    return 0;
}
