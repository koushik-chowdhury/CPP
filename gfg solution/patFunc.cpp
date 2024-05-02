#include <iostream>
using namespace std;
void switchCase();
void triangle();
void flipTriangle();
void invertedTriangle();

int main()
{    
    switchCase();
    return 0;
    system("pause");
}

void switchCase()
{
    int choice;
    cout << "Press 1 for Triangle " << endl;
    cout << "Press 2 for flip Triangle " << endl;
    cout << "Press 3 for Inverted Triangle " << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        triangle();
        break;
    }
    case 2:
    {
        flipTriangle();
        break;
    }
    case 3:
    {
        invertedTriangle();
    }
    default:
        break;
    }
}

// patern printing functions

void triangle()
{
    int row, i, j;

    cout << "Enter row: ";
    cin >> row;

    for (i = 1; i <= row; i += 1)
    {
        for (j = 1; j <= i; j += 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void flipTriangle()
{
    int row, i, j, k;

    cout << "Enter row: ";
    cin >> row;
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

void invertedTriangle()
{
    int row, i, j;

    cout << "Enter row: ";
    cin >> row;

    for (i = 1; i <= row; i += 1)
    {
        for (j = row; j >= i; j -= 1)
        {
            cout << " * ";
        }
        cout << endl;
    }
}