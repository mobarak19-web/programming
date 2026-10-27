#include <iostream>
using namespace std;
int main() {
    int n = 5;
    int BT[5] = {5, 3, 1, 2, 5};
    int AT[5] = {0, 1, 2, 3, 4};
    int CT[5] = {0};
    int is_completed[5] = {0, 0, 0, 0, 0};
    int order[5];
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
            order[completed] = index;
            completed++;
        }else {
            current_time++;
        }
    }
    cout << "Process\tAT\tBT\tCT\n";
    for (int i = 0; i < n; i++) {
        int p = order[i];
        cout << "P" << p + 1 << "\t"<< AT[p] << "\t" << BT[p] << "\t"<< CT[p] << endl;
    }

    return 0;
}