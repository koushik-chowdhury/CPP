// Linear Search in Array: Create a program that searches for a specific element in an array of numbers and indicates its presence or absence using a loop.


#include <iostream>
using namespace std;
void input();
void array(int arr[], int n);
void traverse(int arr[], int n);
void search(int arr[], int n);

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
    search(arr, n); // calling the search function 
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

void search(int arr[], int n)
{
    int i, item, flag = 0;

    cout << "Enter the element you want to search : ";
    cin >> item;

    for(i = 0; i < n; i += 1)
    {
        if(item == arr[i])
        {
            cout << "Your item is present at index " << i;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Your item is not found! ";
    }
}