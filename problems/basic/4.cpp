// Largest of Three Numbers: Create a program that reads three numbers from the user and prints the largest one using conditional statements.

#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3; // variable declaration

    cout << "Enter three Number [Separated by space / enter] : ";
    cin >> n1 >> n2 >> n3;

    if (n2 > n1 && n2 > n3)
    {
        cout << n2 << " is Greatest";
    }
    else if (n1 > n2 && n1 > n3)
    {
        cout << n1 << " is Greatest";
    }
    else
    {
        cout << n3 << " is Greatest";
    }
    cout << endl;
    system("pause");
    return 0;
}
