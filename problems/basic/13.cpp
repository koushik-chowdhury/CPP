// capital to lowerCase

#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a capitall letter: ";
    cin >> ch;
    cout << char(ch + 32);
    system("pause");
    return 0;
}