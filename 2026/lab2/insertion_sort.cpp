// row_wise insertion sort


#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;

    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    int a[r][c];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    // Row-wise Insertion Sort
    for (int i = 0; i < r; i++) {
        for (int j = 1; j < c; j++) {
            int key = a[i][j];
            int k = j - 1;

            while (k >= 0 && a[i][k] > key) {
                a[i][k + 1] = a[i][k];
                k--;
            }
            a[i][k + 1] = key;
        }
    }

    cout << "\nMatrix after row-wise insertion sort:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
