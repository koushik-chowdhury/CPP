#include <iostream>
using namespace std;
void input();
void max(int arr[], int n);
void min(int arr[], int n);
void service(int arr[], int n);

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
    if (n < 0)
    {
        input();
    }
    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i += 1)
    {
        cin >> arr[i];
    }
    service(arr, n); // user will chose the function
}

void service(int arr[], int n)
{
    int choice;
    cout << "Enter your choice : MAX = 0, MIN = 1: ";
    cin >> choice;
    switch (choice)
    {
    case 0:
    {
        max(arr, n);
        break;
    }
    case 1:
    {
        min(arr, n);
        break;
    }
    default:
        service(arr, n);;
    }
}

// MAX ELEMENT FINDER

void max(int arr[], int n)
{
    int max, i;
    max = arr[0];
    for (i = 0; i < n; i += 1)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "Max element = " << max;
}

// MIN ELEMENT FINDER

void min(int arr[], int n)
{
    int min, i;
    min = arr[0];
    for (i = 0; i < n; i += 1)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << "Min element = " << min;
}