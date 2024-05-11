// Positive, Negative, or Zero: Write a program that asks the user for a number and classifies it as positive, negative, or zero using nested if-else statements.

#include <iostream>
using namespace std;

int main()
{
    int num; // variable declaration

    cout << "Enter a number : ";
    cin >> num;

    if (num == 0) // checking if the number is equal to 0, then it wil execute.
    {
        cout << " Zero";
    }
    else if (num > 0) // checking if the number is greater than 1, then it wil execute.
    {
        cout << "Positive";
    }
    else // checking if the number less than 0 (negetive), then it wil execute.
    {
        cout << "Negetive";
    }
    cout << endl;
    system("pause");
    return 0;
}