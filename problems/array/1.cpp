// Array Initialization: Create a program that initializes an array of integers with specific values and prints its elements.

#include <iostream>
using namespace std;
void array(int arr[], int n);
void traverse(int arr[], int n);

int main()
{
    int n;
    cout << "Enter Your Size of array: ";
    cin >> n;
    int arr[n];

    array(arr, n);
    traverse(arr, n);

    return 0;
}

void array(int arr[], int n)
{
    cout << "Enter array Elements: ";
    for (int i = 0; i < n; i += 1)
    {
        cin >> arr[i];
    }
}

void traverse(int arr[], int n)
{
    for (int i = 0; i < n; i += 1)
    {
        cout << arr[i] << " ";
    }
}