#include <iostream>
using namespace std;

int main()
{

    // variable define
    int marks;

    cout << "Enter your Marks: ";
    cin >> marks;

    if (marks >= 90)
    {
        cout << "Grade 'AA'";
    }
    else if (marks >= 80)
    {
        cout << "Grade 'A+'";
    }
    else if (marks >= 70)
    {
        cout << "Grade 'A'";
    }
    else if (marks >= 60)
    {
        cout << "Grade 'B+'";
    }
    else 
    {
        cout << "Better Luck";
    }
}