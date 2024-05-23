#include <iostream>
using namespace std;

int main()
{
    int row, i, j, k;

    cout << "Enter row: ";
    cin >> row;
    for (i = 1; i <= row; i += 1)
    {
        for (k = i; k <= (row * 2) - 3; k += 1)
        {
            cout << "* ";
        }
        for (j = 1; j <= 2*i - 1; j += 1)
        {
            if (j % 2 != 0)
            {
                cout << i << " ";
            }
            else 
            {
                cout << "* ";
            }
        }
        for (k = i; k <= (row * 2) - 3 ; k += 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}