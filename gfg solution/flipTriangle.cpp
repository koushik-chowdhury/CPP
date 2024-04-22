#include <iostream>
using namespace std;

int main()
{
    int row, i, j, k;

    cout << "Enter row: ";
    cin >> row;
    for (i = 1; i <= row; i += 1)
    {
        for (k = i; k <= row; k += 1 )
        {
            cout << " ";
        }
        for (j = 1; j <= i; j += 1)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}