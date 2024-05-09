// Maximum Element in Array: Create a program that finds the maximum element in an array of numbers using a loop.

#include <iostream>
using namespace std;
void input();
void array(int arr[], int n);
void traverse(int arr[], int n);
void findLargest(int[], int n);

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
    findLargest(arr, n);
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

void findLargest(int arr[], int n)
{
    int i, max;
    max = arr[0];
    for (i = 0; i < n; i += 1)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Largest element is : " << max;
}