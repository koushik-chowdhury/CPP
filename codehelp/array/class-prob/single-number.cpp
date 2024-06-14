// leetcode 136

#include <iostream>
using namespace std;
void input();
void singleNumber(int arr[], int n);

int main()
{
    input();

    return 0;
}

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

void singleNumber(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i += 1)
    {
        ans ^= arr[i];
    }
    cout << ans << endl;
}