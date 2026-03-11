#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int prev = -1;        // আগের সংখ্যা
    int maxDiff = 0;     // maximum difference রাখবে

    // Even numbers first
    for (int i = 2; i <= n; i += 2)
    {
        cout << i << " ";

        if (prev != -1)
        {
            int diff = abs(i - prev);
            if (diff > maxDiff)
                maxDiff = diff;
        }
        prev = i;
    }

    // Then odd numbers
    for (int i = 1; i <= n; i += 2)
    {
        cout << i << " ";

        if (prev != -1)
        {
            int diff = abs(i - prev);
            if (diff > maxDiff)
                maxDiff = diff;
        }
        prev = i;
    }

    cout << endl;
    cout << "Maximum Difference = " << maxDiff << endl;

    return 0;
}
