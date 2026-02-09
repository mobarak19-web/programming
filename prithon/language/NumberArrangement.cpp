#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
      int prev = -1;
    int minDiff = 1e9;
    // print the even numbar
    for (int i = 2; i <= n; i += 2)
    {
        cout << i;
        
        if (prev != -1)
        {
            int diff = abs(i - prev);
            if (diff < minDiff)
                minDiff = diff;
        }
        prev = i;
    }
    for (int i = 1; i <= n; i += 2)
    {
        cout << i;
        if (prev != -1)
        {
            int diff = abs(i - prev);
            if (diff < minDiff)
                minDiff = diff;
        }
        prev = i;
    }
    cout << endl;
      cout << "Minimum Difference = " << minDiff << endl;
    return 0;
}