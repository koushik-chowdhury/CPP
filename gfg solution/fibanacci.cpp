#include <iostream>
using namespace std;
int fibonacci();

int main()
{
    fibonacci();

    return 0;
}

int fibonacci()
{
    int n, num1 = 0, num2 = 1, ans, i;
    cin >> n;

    for (i = 0; i <= n; i++)
    {
        ans = num1;
        if(ans % 2 == 0)
        {
            cout << ans << " ";
        }
        num1 = num1 + num2;
        num2 = ans;
    }
    return 0;
}