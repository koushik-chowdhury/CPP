#include <iostream>
using namespace std;
void input();
void flip(int arr[], int n);
void traverse(int arr[], int n);

int main()
{
    input();
    return 0;
}

// taking input

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
        if (arr[i] < 0 || arr[i] > 1)
        {
            cout << endl << "Only 0 and 1 allowed" << endl << endl;
            input();
        }
    }

    flip(arr, n);
}

// flipping

void flip(int arr[], int n)
{
    for (int i = 0; i < n; i += 1)
    {
        if (arr[i] == 0)
        {
            arr[i] += 1;
        }
        else 
        {
            arr[i] -= 1;
        }
    }
    traverse(arr, n);
}

// traversing

void traverse(int arr[], int n)
{
    for (int i = 0; i < n; i += 1)
    {
        cout << arr[i] << " ";
    }
}