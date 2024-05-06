#include <iostream>
using namespace std;
#include <vector>
// int fibonacci();

// int main()
// {
//     fibonacci();

//     return 0;
// }

// int fibonacci()
// {
//     int n, num1 = 0, num2 = 1, ans, i;
//     cin >> n;

//     for (i = 0; i <= n; i++)
//     {
//         ans = num1;
//         cout << ans << " ";
//         num1 = num1 + num2;
//         num2 = ans;
//     }
//     return 0;
// }
 //Back-end complete function template for C++

class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //creating a list to store the numbers.
        vector<long long> ans;
        
        //storing base values for a and b.
        long long int a=1,b=1;
        
        //pushing 1 once in the list if n>=1 and again if n>=2.

