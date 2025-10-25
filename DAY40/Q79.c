//Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int d = 0; d < n + m - 1; d++) {
        int row = d < n ? d : n - 1;
        int col = d - row;
        while(row >= 0 && col < m) {
            printf("%d ", a[row][col]);
            row--;
            col++;
        }
    }
    printf("\n");
    return 0;
}
