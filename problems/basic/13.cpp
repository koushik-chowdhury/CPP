// capital to lowerCase

#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a capitall letter: ";
    cin >> ch;
    cout << char(ch + 32);
    return 0;
}