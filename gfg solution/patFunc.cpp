#include <iostream>
using namespace std;
void switchCase();
void rightHP();
void leftHP();
void invertedRHP();
void invertedLHP();

int main()
{
    switchCase();
    return 0;
    system("pause");
}

void switchCase()
{
    int choice;

    // cout << endl;
    cout << "Press 1 for Right half pyramid " << endl;
    cout << "Press 2 for Left half pyramid " << endl;
    cout << "Press 3 for Inverted Right half pyramid " << endl;
    cout << "Press 4 for Inverted Left half pyramid " << endl;

    cout << "Enter your choice: ";
    cin >> choice;
    cout << endl;

    switch (choice)
    {
    case 1:
    {
        rightHP();
        break;
    }
    case 2:
    {
        leftHP();
        break;
    }
    case 3:
    {
        invertedRHP();
        break;
    }
    case 4:
    {
        invertedLHP();
        break;
    }
    default:
    {
        cout << "You have entered wrong choice. Select again" << endl << endl;
        switchCase();
        break;
    }
    }
}

// patern printing functions

void rightHP()
{
    int row, i, j;

    cout << "Enter row: ";
    cin >> row;
    cout << endl;

    for (i = 1; i <= row; i += 1)
    {
        for (j = 1; j <= i; j += 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void leftHP()
{
    int row, i, j, k;

    cout << "Enter row: ";
    cin >> row;
    cout << endl;

    for (i = 1; i <= row; i += 1)
    {
        for (k = i; k <= row; k += 1)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j += 1)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void invertedRHP()
{
    int row, i, j;

    cout << "Enter row: ";
    cin >> row;
    cout << endl;

    for (i = 1; i <= row; i += 1)
    {
        for (j = row; j >= i; j -= 1)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

void invertedLHP()
{
    int row, i, j;

    cout << "Enter row: ";
    cin >> row;
    cout << endl;

    for (i = 1; i <= row; i += 1)
    {
        for (j = 1; j <= i - 1; j += 1)
        {
            cout << " ";
        }
        for (j = row; j >= i; j -= 1)
        {
            cout << "*";
        }
        cout << endl;
    }
}