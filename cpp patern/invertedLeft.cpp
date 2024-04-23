#include <iostream>
using namespace std;

int main()
{
    int row, i, j;

    cout << "Enter row: ";
    cin >> row;

    for (i = 1; i <= row; i += 1)
    {
        for(j = 1; j <= i-1; j += 1)
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