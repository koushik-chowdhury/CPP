#include <iostream>
using namespace std;

int main()
{

    // variable define
    int year;

    cout << "Enter year: ";
    cin >> year;

    if(year % 400 == 0  || year % 100 != 0 && year % 4 == 0)
    {
        cout << year << " is leap Year";
    }
    else
    {
        cout << year << " is not leap year";
    }
    return 0;
}