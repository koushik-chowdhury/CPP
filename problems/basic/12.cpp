// Armstrong Number: Write a program that checks if a given number is an Armstrong number (a number is Armstrong if the sum of the cube of its digits is equal to the number itself).

#include <iostream>
using namespace std;

int main()
{
    int num, temp, digit, i, sum, total = 0;

    cout << "Enter a number: ";
    cin >> num;
    temp = num;

    while(num)
    {
        digit = num % 10;
        num /= 10;
        sum = 1;
        for(i = 1; i <= 3; i += 1)
        {
            sum = sum * digit;
        }
        total += sum;   
        cout << total << endl;      
    }
    if (temp == total)
    {
        cout << temp << " is a Armstrong number";
    }
    else 
    {
        cout << temp << " is not a Armstrong number";
    }
    cout << endl;
    system("pause");
    return 0;
}