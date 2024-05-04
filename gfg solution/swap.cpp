#include <iostream>
using namespace std;
void swap();

int main()
{
    swap();
    return 0;
}

void swap()
{
    int a, b, temp;

    cout << "Enter Two number : ";
    cin >> a >> b;

    cout << "Before swap A = " << a << " and " << " B = " << b << endl;
    temp = a;
    a = b;
    b = temp;

    cout << "After swap A = " << a << " and " << " B = " << b;
}