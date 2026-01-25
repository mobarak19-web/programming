#include <stdio.h>

int main() {
    int r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
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

    printf("\nMatrix after row-wise insertion sort:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
 