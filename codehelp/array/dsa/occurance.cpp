#include <iostream>
using namespace std;
void input();
void occurance(int arr[], int n);

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
    occurance(arr, n);
}

void occurance(int arr[], int n)
{
    int i, counter = 0, key;
    cout << "Enter the element you want to count: ";
    cin >> key;
    for (i = 0; i < n; i += 1)
    {
        if (key == arr[i])
        {
            counter++;
        }
    }
    cout << "Your element is present " << counter << " time." << endl;
    if (counter == 0)
    {
        cout << "Element is not present in the array";
    }
}