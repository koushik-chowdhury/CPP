#include <iostream>
using namespace std;

int main()
{
    // variable define
    int row, j, i ;

    cout << "Enter row: ";
    cin >> row;

    for (i = 0; i < row; i += 1)
    {
        for (j = 0; j < row; j += 1)
        {
            if (i > 0 && i < row - 1 && j > 0 && j < row - 1)
            {
                cout << "if";
            }
            else
            {
                cout << "else";
            }
        }
        cout << endl;
    }
    return 0;
}