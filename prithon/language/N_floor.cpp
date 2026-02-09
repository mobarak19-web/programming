
#include <iostream>
using namespace std;

int main()
{
    int n, k;
    int nextroom = 101;  
    int nextfloor = 1;
    int ans = 0;

    cout << "Enter floor_size and room_size:\n";
    cin >> n >> k;

    for (int i = 1; i <= (n * k); i++)
    {
        ans += nextroom;
        nextroom++;

        if (i % k == 0)
        {
            nextfloor++;
            nextroom = (nextfloor * 100) + 1;  //  main fix
        }
    }

    cout << ans << endl;
    return 0;
}
