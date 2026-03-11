#include <iostream>
using namespace std;

int main()
{
    int start, end;
    cin >> start >> end;

    while (true)
    {
        if (start > 12)
            start = 1;

        cout << start << " ";

        if (start == end)
            break;

        start++;
    }

    return 0;
}


