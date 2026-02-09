#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        int lastdigit = n % 10;
        if (lastdigit != 0)
        {
            n -= 1;
        }
        else
        {
            n /= 10;
        }
    }
    cout << n;
    return 0;
}