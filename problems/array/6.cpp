// Reverse Array: Write a program that reverses the elements of an array (place the last element in the first position, etc.) using a loop.

#include <iostream>
using namespace std;
void input();
void array(int arr[], int n);
void traverse(int arr[], int n);
void reverse(int arr[], int n);

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
    reverse(arr, n);  // calling the reverse function
}

// traversing function

void traverse(int arr[], int n)
{
    cout << "Original array is : ";
    for (int i = 0; i < n; i += 1)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverse(int arr[], int n)
{
    int revarr[n], i;

    // reversing the array

    for (i = 0; i < n; i += 1)
    {
        revarr[i] = arr[n - (i + 1)];
        cout << revarr[i] << " ";
    }
}