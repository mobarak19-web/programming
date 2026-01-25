#include <iostream>
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

    // Column-wise Insertion Sort
    for (int j = 0; j < c; j++) {           
        for (int i = 1; i < r; i++) {     
            int key = a[i][j];
            int k = i - 1;

            while (k >= 0 && a[k][j] > key) {
                a[k + 1][j] = a[k][j];
                k--;
            }
            a[k + 1][j] = key;
        }
    }

    cout << "\nMatrix after column-wise insertion sort:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
