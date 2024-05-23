// Average of N Numbers: Create a program that reads N numbers from the user and calculates their average using a loop and an accumulator variable.

#include <iostream>
using namespace std;
void sumOfDig();
void average(int sum, int counter);

int main()
{
    sumOfDig();

    return 0;
}

// function

void sumOfDig()
{
    int n, sum = 0, counter = 0;
    char choice = 'y';

    while(n)
    {
        cout << "Enter a number: ";
        cin >> n;
        sum += n;
        counter ++;
        cout << "Enter your choice y / n: ";
        cin >> choice;
        if (choice != 'y')
        {
            cout << endl << "sum of digits = " << sum << endl;
            break;
        }

    }
    // calling average function

    average(sum, counter);
}

void average(int sum, int counter)
{
    cout << "Average of numbers = " << float(sum) / float(counter) << endl;

}