#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator: ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    switch (op)
    {
    case '+':
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-':
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*':
    cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        break;
    
    default:
        break;
    }
}