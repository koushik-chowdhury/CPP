#include <iostream>
using namespace std;

int main()
{
    int row, i, j, k;

    cout << "Enter row: ";
    cin >> row;
    for (i = 1; i <= row; i += 1)
    {
        for (k = i; k <= row-1; k += 1)
        {
            cout << " ";
        }
        for (j = 1; j <= (2 * i) - 1; j += 1)
        { 
            cout << "*";
        }
        cout << endl;
    }
    for (i = 1; i <= row; i += 1)
    {
        for (k = 1; k <= i; k += 1)
        {
            cout << ".";
        }
        for (j = i; j <= (row * 2) - (2+i); j += 1)
        { 
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}