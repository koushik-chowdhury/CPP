// Unit Conversion (Celsius to Fahrenheit): Write a program that asks the user for a temperature in Celsius and converts it to Fahrenheit using the formula (F = (C * 9/5) + 32).

#include <iostream>
using namespace std;

int main()
{   
    double cel;

    cout << "Enter Temperature in Celsius: ";
    cin >> cel;

    cout << cel << " celsius = " << (cel * 9/5) + 32 << " Fahrenheit";
    cout << endl;
    system("pause");
    return 0;
}