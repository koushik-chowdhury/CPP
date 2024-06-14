// leetCode 136 alternative approach

#include <iostream>
using namespace std;
void input();
void singleNumber(int arr[], int n);
int main()
{
    input();

    return 0;
}
// input
void input()
{
    int n;
    cout << "Enter Your Size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter array Elements: ";
    for (int i = 0; i < n; i += 1)
    {
        cin >> arr[i];
    }
    singleNumber(arr, n); // calling the function for taking input of array elements
}

// unique number finder

void singleNumber(int arr[], int n)
{
    int ans[n];
    for (int i = 0; i < n; i += 1)
    {
        int counter = 0;
        for (int j = 0; j < n; j += 1)
        {
            if (arr[i] == arr[j])
            {
                counter++;
            }
        }
        ans[i] = counter;
    }
    for (int i = 0; i < n; i += 1)
    {
        if (ans[i] == 1)
        {
            cout << arr[i];
        }
    }
}