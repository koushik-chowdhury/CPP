#include <iostream>
using namespace std;

int main()
{
    int row, i, j, k;
    int num;

    cout << "Enter row: ";
    cin >> row;
    for (i = 1; i <= row; i += 1)
    {
        for (k = i; k <= row-1; k += 1)
        {
            cout << "  ";
        }
        for (j = 1; j <= i; j += 1)
        { 
            cout << j << " ";
        }
         for (int l = 1, num = i - 1; l < i, num > 0; l += 1, num -= 1)
        { 
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}

