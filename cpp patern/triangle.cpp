#include <iostream>
using namespace std;

int main()
{
    int row, i, j, k = 1;

    cout << "Enter row: ";
    cin >> row;

    for (i = 1; i <= row; i += 1)
    {
        for (j = 1; j <= i; j += 1)
        {
            cout << k;
            k++;
        }
        cout << endl;
    }
    return 0;
}