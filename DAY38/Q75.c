//Add two matrices.

#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;
    scanf("%d %d", &rows1, &cols1);
    int a[rows1][cols1];
    for(int i=0; i<rows1; i++) {
        for(int j=0; jols1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d %d", &rows2, &cols2);
    int b[rows2][cols2];
    for(int i=0; i<rows2; i++) {
        for(int j=0; jols2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    int sum[rows1][cols1];
    for(int i=0; i<rows1; i++) {
        for(int j=0; jols1; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    for(int i=0; i<rows1; i++) {
        for(int j=0; jols1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
