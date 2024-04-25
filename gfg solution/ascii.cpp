// Q3. Write a Program to Print the ASCII Value of a Character.

#include <iostream>
using namespace std;

int main()
{

    // variable define

    char start, end;
    int istart, iend, choice;

    cout << "1. Print ASCII values from characters  (range)" << endl;
    cout << "2. Print characters from ASCII values " << endl;
    cout << "3. Get ASCII value of a character (single)" << endl;
    cout << "4. Get Character of a ASCII value (single)" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        cout << "Enter start: ";
        cin >> start;
        cout << "Enter end: ";
        cin >> end;

        // loop

        for (; start <= end; start += 1)
        {
            cout << start << " = " << (char)start << ", ";
        }
        break;
    }
    case 2:
    {
        cout << "Enter start: ";
        cin >> istart;
        cout << "Enter end: ";
        cin >> iend;

        // loop

        for (; istart <= iend; istart += 1)
        {
            cout << istart << " = " << (char)istart << ", ";
        }
        break;
    }
    case 3:
    {
        cout << "Enter your character: ";
        cin >> start;
        cout << start << " = " << (int)start;
    }
     case 4:
    {
        cout << "Enter your value: ";
        cin >> istart;
        cout << istart << " = " << (char)istart;
    }
    default:
        break;

        return 0;
    }
}