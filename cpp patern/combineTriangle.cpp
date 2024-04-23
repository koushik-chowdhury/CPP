
#include <iostream>
using namespace std;

int main()
{
    int row, i, j;

    cout << "Enter row: ";
    cin >> row;

    for (i = 1; i <= row; i += 1)
    {
        for (j = 1; j <= i; j += 1)
        {
            cout << " * ";
        }
        cout << endl;
        if (i == row)
        {
            for (i = 1; i <= row; i += 1)
            {
                for (j = i; j <= row - 1; j += 1)
                {
                    cout << " * ";
                }
                cout << endl;
            }
        }
    }
        return 0;
    }