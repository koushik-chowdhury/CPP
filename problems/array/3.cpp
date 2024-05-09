// Sum of Array Elements: Write a program that reads N integers from the user and stores them in an array, then calculates and prints the sum of all elements.

#include <iostream>
using namespace std;
void input();
void array(int arr[], int n);
void traverse(int arr[], int n);
void sum(int arr[], int n);

int main()
{
    input(); // function for taking size of the array from user.
    return 0;
}

// input() function for taking size.

void input()
{
    int n;
    cout << "Enter Your Size of array: ";
    cin >> n;
    int arr[n];

    array(arr, n); // calling the function for taking input of array elements
}

// function for taking values of array

void array(int arr[], int n)
{
    cout << "Enter array Elements: ";
    for (int i = 0; i < n; i += 1)
    {
        cin >> arr[i];
    }
    traverse(arr, n); // calling traverse funtion that will print each value of the array
    sum(arr, n);
}

// traversing function

void traverse(int arr[], int n)
{
    for (int i = 0; i < n; i += 1)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i += 1)
    {
        sum += arr[i];
    }
    cout << "Sum of array elements is = " << sum << endl;
}