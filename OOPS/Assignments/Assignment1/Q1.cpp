#include <iostream>
using namespace std;

enum Day
{
    Sunday = 1,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int
main()
{
    int dayNumber;
    cout << "Enter day number (1-7): ";
    cin >> dayNumber;
    switch (dayNumber)
    {
    case Sunday:
        cout << "Sunday";
        break;
    case Monday:
        cout << "Monday";
        break;
    case Tuesday:
        cout << "Tuesday";
        break;
    case Wednesday:
        cout << "Wednesday";
        break;
    case Thursday:
        cout << "Thursday";
        break;
    case Friday:
        cout << "Friday";
        break;
    case Saturday:
        cout << "Saturday";
        break;
    default:
        cout << "Invalid day";
    }
    return 0;
}