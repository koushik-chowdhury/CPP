#include <iostream>
using namespace std;

int main()
{

    // variable define

    int n1, n2, n3;

    // cout << "Enter first number: ";
    // cin >> n1 >> n2 >> n3;

    cout << "Enter First number: ";
    cin >> n1;
    cout << "Enter Second number: ";
    cin >> n2;
    cout << "Enter Third number: ";
    cin >> n3;

    // checking largest among three number
    if (n1 > n2 && n1 > n3)
    {
        cout << n1 << " is Largest" << endl;
    }
    else if (n2 > n3)
    {
        cout << n2 << " is largest" << endl;
    }
    else
    {
        cout << n3 << " is largest" << endl;
    }

    system("pause"); // for holding the screen
    return 0;
}
