// Fibonacci Sequence: Write a program that generates the first N terms of the Fibonacci sequence (0, 1, 1, 2, 3, ...) using a loop.

#include <iostream>
using namespace std;
void fibb();

int main()
{
    fibb();

    return 0;
}

// function

void fibb()
{
    int n1 = 0, n2 = 1, temp, i, n;

    cout << " Enter size: ";
    cin >> n;
    for (i = 0; i <= n; i += 1)
    {
        temp = n1;
        cout << temp << " ";
        n1 +=  n2;
        n2 = temp;
    }
}