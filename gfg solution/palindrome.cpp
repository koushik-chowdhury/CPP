#include <iostream>
using namespace std;

int main()
{
    // variable define 

    int num, temp, rev = 0, orgnl;

    cout << "Enter a Number: ";
    cin >> num;
    orgnl = num;
    while (num)
    {
        temp = num % 10;
        rev = temp + (rev * 10);
        num = num / 10;
    }
    if(orgnl == rev)
    {
        cout << "The given number is palindrome";
    }
    else 
    {
        cout << "The given number is not palindrome";
    }
    return 0;
}