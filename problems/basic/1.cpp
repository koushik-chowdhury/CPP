// Even or Odd: Write a program that prompts the user for an integer and determines if it's even or odd using the modulo operator (%).

#include <iostream>
using namespace std;

int main()
{
    int n; // variable declaration

    cout << "Enter a number : ";
    cin >> n;

    if (n % 2 == 0) // modulo give us remainder. so if it is 0, we can say it's even otherwise it is odd.
    {
        cout << n << " is an even number";
    }
    else
    {
        cout << n << " is an odd number";
    }
    cout << endl;
    system("pause");
    return 0;
}