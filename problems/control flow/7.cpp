// Palindrome Check: Write a program that prompts the user for a string or number and checks if it's a palindrome (reads the same backward as forward) using a loop.

#include <iostream>
using namespace std;
void reverse();
bool palindrome(int rev, int orgnl);

int main()
{
    reverse();

    return 0;
}

// function

void reverse()
{
    int num, rev = 0, digit, orgnl;

    cout << "Enter a number: ";
    cin >> num;
    orgnl = num;

    while (num)
    {
        digit = num % 10;
        rev = digit + (10 * rev);
        num = num / 10;
    }
    cout << "Reverse of the number is = " << rev << endl;
    if (palindrome(rev, orgnl))
    {
        cout << "The number is palindrome";
    }
    else 
    {
        cout << "The number is not palindrome";
    }
}

// function

bool palindrome(int rev, int orgnl)
{
    return rev == orgnl;

}