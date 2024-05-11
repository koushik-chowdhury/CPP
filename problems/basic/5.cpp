// Leap Year: Write a program that checks if a given year is a leap year based on divisibility rules.

#include <iostream>
using namespace std;

int main()
{
    int year; // variable declaration

    cout << "Enter a year: ";
    cin >> year;

    if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
    {
        cout << year << " is Leap Year";
    }
    else
    {
        cout << year << " is not Leap Year";
    }
    cout << endl;
    system("pause");
    return 0;
}