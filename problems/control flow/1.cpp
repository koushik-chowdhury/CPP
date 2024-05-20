// Prime Number Check: Create a program that prompts the user for a number and checks if it's a prime number (divisible by 1 and itself only) using a loop for divisibility checks.

#include <iostream>
using namespace std;
void prime();

int main()
{
    prime();

    return 0;
    system("pause");
}

// function

void prime()
{
    int num, i, flag = 0;

    cout << "Enter a number: ";
    cin >> num;

    for (i = 2; i * i <= num; i += 1)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << num << " is prime";
    }
    else
    {
        cout << num << " is not prime";
    }
    cout << endl;
}
