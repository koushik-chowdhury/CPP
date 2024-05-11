// Even or Odd: Write a program that prompts the user for an integer and determines if it's even or odd using the modulo operator (%).

#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout << "Enter a number : ";
    cin >> n;

    if(n % 2 == 0)
    {
        cout << n << " is an even number";
    }
    else
    {
        cout << n << " is an odd number";
    }

    return 0;
}