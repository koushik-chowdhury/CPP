#include <iostream>
using namespace std;
void input();
void sum(int arr[], int n);

int main()
{
    input();
    return 0;
    system("pause");
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
    sum(arr, n);
}

void sum(int arr[], int n)
{
    int sum = 0, i;

    for (i = 0; i < n; i += 1)
    {
        sum += arr[i];
    }
    cout << "Sum of the elements are : " << sum;
}