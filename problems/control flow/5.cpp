// Multiplication Table: Write a program that prints the multiplication table of a given number up to a specified limit using nested loops

#include <iostream>
using namespace std;
void mul();

int main()
{
    mul();

    return 0;
    system("pause");
}

// function

void mul()
{
    int start, end, i;

    cout << "Enter starting point: ";
    cin >> start;
    cout << "Enter end point: ";
    cin >> end;

    if (start > 0 && end > 0)
    {
        for (i = start; i <= end; i += 1)
        {
            for (int j = 1; j <= 10; j += 1)
            {
                cout << i << " x " << j << " = " << i * j << endl;
            }
            cout << endl;
        }
    }
    else
        {
            cout << "Enter range greater than 0";
            mul();
        }
}