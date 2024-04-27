#include <iostream>
using namespace std;

int main()
{

    // variable define

    int num, i, flag = 0;

    cout << "Enter a Number: ";
    cin >> num;

    // loop
    for (i = 2; i <= num / 2; i += 1)
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
    return 0;
}
