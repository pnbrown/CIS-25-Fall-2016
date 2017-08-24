#include <iostream>
#include <string>
using namespace std;

void time(int, int);

int main()
{
    int hours, minutes;
    cout << "Please enter the hour: ";
    cin >> hours;

    cout << "Please enter the minutes: ";
    cin >> minutes;

    time(hours, minutes);
}

void time(int a, int b)
{
    cout << "Time: " << a << ":" << b << endl;
}