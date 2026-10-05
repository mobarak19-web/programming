#include <iostream>
using namespace std;

int main() {
    int at[] = {0, 1, 2, 3, 4, 5, 6};
    int bt[] = {3, 2, 5, 10, 2, 6, 5};

    int ct[7], tat[7], wt[7], rt[7];

    // Completion Time
    ct[0] = at[0] + bt[0];

    for (int i = 1; i < 7; i++) {
        if (ct[i - 1] < at[i])
            ct[i] = at[i] + bt[i];
        else
            ct[i] = ct[i - 1] + bt[i];
    }

    // TAT, WT, RT
    for (int i = 0; i < 7; i++) {
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
        rt[i] = wt[i];
    }

    // Output
    for (int i = 0; i < 7; i++) {
        cout << "Process " << i + 1
             << ": AT=" << at[i]
             << ", BT=" << bt[i]
             << ", CT=" << ct[i]
             << ", TAT=" << tat[i]
             << ", WT=" << wt[i]
             << ", RT=" << rt[i] << endl;
    }

    return 0;
}