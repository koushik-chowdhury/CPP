// Even or Odd: Write a program that prompts the user for an integer and determines if it's even or odd using bitwise operator

#include <iostream>
using namespace std;

int main()
{
    int n;  // variable declaration

    cout << "Enter a number : ";
    cin >> n;

    if (n & 1)  // it will perform bitwise and. if both number is 1 then it will give 1.
    {
        cout << n << " is an odd number";
    }
    else
    {
        cout << n << " is an even number";
    }
    cout << endl;
    system("pause");
    return 0;
}
