// Vowel or Consonant: Create a program that prompts the user for a character and determines if it's a vowel (a, e, i, o, u) or a consonant using a switch statement or multiple if statements.

#include <iostream>
using namespace std;

int main()
{
    char ch, vowels[] = {'a', 'e', 'i', 'o', 'u'};
    int flag = 0;

    cout << "Enter a character: ";
    cin >> ch;

    for (int i = 0; i < 5; i += 1)
    {
        if (tolower(ch) == vowels[i])
        {
            cout << "it's a vowel";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "It's not a vowel";
    }
    cout << endl;
    system("pause");
    return 0;
}