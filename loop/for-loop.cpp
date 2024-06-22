#include <iostream>
using namespace std;

int main()
{
    // variable define
    int time;
    int countstart, countend;
    int tablestart, tableend, i, n = 1;

    cout << "How many time you want to print your name: ";
    cin >> time;

    // for loop
    for( int i = 1; i <= time; i = i + 1)
    {
        cout << "Koushik " << i << endl;
    }
    cout << "Enter your Starting point: ";
    cin >> countstart;
    cout << "Enter your End point: ";
    cin >> countend;

    for(; countstart <= countend; countstart += 1 )
    {
        cout << countstart << endl;
    }
    while (n)
    {
        cout << "Enter Table start point: ";
        cin >> tablestart;
        cout << "Enter Table end point: ";
        cin >> tableend;

        for (; tablestart <= tableend; tablestart += 1)
        {
            for (i = 1; i <= 10; i += 1)
            {
                cout << tablestart << " x " << i << " = " << tablestart * i << endl;
            }
        }
        cin >> n;
        if (n == 0)
        {
            break;
        }
    }
    system("pause");
    return 0;
}