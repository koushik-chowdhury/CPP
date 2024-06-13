#include <iostream>
#include <vector>
#include <string> // For handling string input

using namespace std;

int main()
{
    vector<int> array;
    string input;

    while (true)
    {
        cout << "Enter an integer (or '=' to quit): ";
        getline(cin, input);

        if (input == "=")
        {
            break;
        }

        // Check if input is a valid integer
        try
        {
            int n = stoi(input);
            array.push_back(n);
        }
        catch (const invalid_argument &e)
        {
            cout << "Invalid input. Please enter an integer." << endl;
        }
    }

    int size = array.size();
    if (size > 0)
    {
        cout << "Entered integers:" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << endl;
        }
    }
    else
    {
        cout << "No integers were entered." << endl;
    }

    return 0;
}
