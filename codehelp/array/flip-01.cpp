// flip 0 and 1

#include <iostream>
using namespace std;
void input();
void sorting(int arr[], int n);

int main()
{
    input();
    return 0;
}

void input()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];

    if (n > 0)
    {
        cout << "Enter array elements: ";
        for (int i = 0; i < n; i += 1)
        {
            cin >> arr[i];
        }
    }
    sorting(arr, n);
}

void sorting(int arr[], int n)
{
    int countZero = 0;
     for (int i = 0; i < n; i += 1)
    {
        if (arr[i] == 0)
        {
            countZero += 1;
        }
    }
    for (int i = 0; i < countZero; i += 1)
    {
        arr[i] = 0;
    }
    for (int i = countZero; i < n; i += 1)
    {
        arr[i] = 1;
    }
    for (int i = 0; i < n; i += 1)
    {
        cout << arr[i] << " ";
    }
}