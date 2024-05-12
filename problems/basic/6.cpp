// Vowel or Consonant: Create a program that prompts the user for a character and determines if it's a vowel (a, e, i, o, u) or a consonant using a switch statement or multiple if statements.
// check out 7.cpp

#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a Alphabet : ";
    cin >> ch;

    if (ch == 'a' || ch == 'A')
    {
        cout << ch << " is a vowel";
    }
    else if (ch == 'e' || ch == 'E')
    {
        cout << ch << " is a vowel";
    }
    else if (ch == 'i' || ch == 'I')
    {
        cout << ch << " is a vowel";
    }
    else if (ch == 'o' || ch == 'O')
    {
        cout << ch << " is a vowel";
    }
    else if (ch == 'u' || ch == 'U')
    {
        cout << ch << " is a vowel";
    }
    else 
    {
        cout << "You have entered other character";
    }
    cout << endl;
    system("pause");
    return 0;
}