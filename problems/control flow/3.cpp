// Fibonacci Sequence: Write a program that generates the first N terms of the Fibonacci sequence (0, 1, 1, 2, 3, ...) using a loop.
// only odd

#include <iostream>
using namespace std;
int fibb();
bool odd(int temp);

int main()
{
    fibb();

    return 0;
}

// function

int fibb()
{
    int n1 = 0, n2 = 1, temp, i, n;

    cout << " Enter size: ";
    cin >> n;
    if (n > 0)
    {
        for (i = 0; i <= n; i += 1)
        {
            temp = n1;
            if (odd(temp))
            {
                cout << temp << " " << endl;
            }
            n1 += n2;
            n2 = temp;
        }
    }
    return 0;
}

// function

bool odd(int temp)
{
    return temp % 2 != 0;
}