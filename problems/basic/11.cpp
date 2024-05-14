// Area of Triangle: Create a program that prompts the user for the base, height, and checks for invalid input (negative values). If valid, calculate the area of the triangle (area = 0.5 * base * height).

#include <iostream>
using namespace std;

int main()
{
    int height, base;

    cout << " Enter height: ";
    cin >> height;
    cout << "Enter Base: ";
    cin >> base;

    if (height && base > 0)
    {
        cout << "Area of triangle is : " << 0.5 * height * base;
    }
    else
    {
        cout << "You have entered wrong value";
    }
    cout << endl;
    system("pause");
    return 0;
}