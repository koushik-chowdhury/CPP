// Copy Array: Write a program that copies the elements of one array to another array.
#include <iostream>
using namespace std;
void input();
void array(int arr[], int n);
void traverse(int arr[], int n);
void copy(int arr[], int n);

int main()
{
    input(); // function for taking size of the array from user.
    system("pause");
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
    copy(arr, n); // copying the array
}

// traversing function

void traverse(int arr[], int n)
{
    cout << "Original array :";
    for (int i = 0; i < n; i += 1)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void copy(int arr[], int n)
{
    int duparray[n], i;

    // copying the array 

    cout << "Copied array : ";
    for(i = 0; i < n; i += 1)
    {
        duparray[i] = arr[i];
        cout << duparray[i] << " ";
    }
}