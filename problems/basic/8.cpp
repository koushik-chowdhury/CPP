// Gross Salary Calculation: Write a program that takes basic salary, Dearness Allowance (DA) as a percentage, and House Rent Allowance (HRA) as a percentage as input, and calculates the gross salary using formulas (gross = basic + DA% * basic + HRA% * basic).

#include <iostream>
using namespace std;

int main()
{
    double gross, basic, da, hra;

    cout << "Enter Your Basic Salary: ";
    cin >> basic;
    cout << "Enter Your percentage of DA: ";
    cin >> da;
    cout << "Enter Your percentage of HRA: ";
    cin >> hra;

    gross = basic * (1 + da / 100 + hra / 100);
    cout << gross;
    cout << endl;
    system("pause");
    return 0;
}