// Sum of Digits: Create a program that reads an integer from the user and calculates the sum of its digits using a loop.

#include <iostream>
using namespace std;
void sumOfDig();

int main()
{
    sumOfDig();

    return 0;
}

// function

void sumOfDig()
{
    int n, sum = 0;
    char choice = 'y';

    while(n)
    {
        cout << "Enter a number: ";
        cin >> n;
        sum += n;
        cout << "Enter your choice y / n: ";
        cin >> choice;
        if (choice != 'y')
        {
            cout << "sum of digits = " << sum;
            break;
        }

    }
}