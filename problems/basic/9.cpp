// Simple Interest: Create a program that prompts the user for principal amount, rate of interest, and time, and calculates the simple interest (SI = P * R * T / 100).

#include <iostream>
using namespace std;

int main()
{
    double principle, rate, time, interest;

    cout << "Enter Principle amount: ";
    cin >> principle;
    cout << "Enter rate of interest: ";
    cin >> rate;
    cout << "Enter time period: ";
    cin >> time;

    interest = (principle * rate * time) / 100;

    cout << "Interest = " << interest;
    cout << endl;
    system("pause");
    return 0;
}