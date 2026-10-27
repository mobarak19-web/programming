#include <iostream>
using namespace std;

int main() {
    int n = 5;

    int BT[5] = {5, 3, 1, 2, 5};
    int AT[5] = {0, 1, 2, 3, 4};

    int CT[5] = {0};
    int is_completed[5] = {0, 0, 0, 0, 0};

    int current_time = 0;
    int completed = 0;

    while (completed < n) {

        int index = -1;
        int minvalue = 100;

        for (int i = 0; i < n; i++) {
            if (AT[i] <= current_time && is_completed[i] == 0 && BT[i] < minvalue) {

                minvalue = BT[i];
                index = i;
            }
        }
        if (index != -1) {
            current_time += BT[index];
            CT[index] = current_time;

            is_completed[index] = 1;
            completed++;

            //cout << "P" << index + 1<< " -> CT = " << CT[index] << endl;
        }
        else {
            current_time++;
        }
    }

    cout << "\nProcess\tAT\tBT\tCT\n";

    for (int i = 0; i < n; i++) {
        cout << "P" << i + 1 << "\t"<< AT[i] << "\t" << BT[i] << "\t"<< CT[i] << endl;
    }

    return 0;
}