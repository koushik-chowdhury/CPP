#include <iostream>
using namespace std;
int sumOfDig();
int main()
{
    sumOfDig();
    
    return 0;
}

int sumOfDig()
{
    int num, sum = 0;
    char y = 'y';

    while(y == 'y')
    {
        cout << "Enter Number: ";
        cin >> num;
        sum += num;

        cout << "Do you want to add more y/n :";
        cin >> y;        
    }
    cout << "Sum of Digits is = " << sum;
    
    return 0;
}