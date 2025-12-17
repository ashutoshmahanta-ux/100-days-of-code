//Multiply two matrices.

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            scanf("%d", &a[i][j]);

    int m2, k;
    scanf("%d %d", &m2, &k);
    int b[m2][k];
    for(int i=0; i<m2; i++)
        for(int j=0; j<k; j++)
            scanf("%d", &b[i][j]);

    if(m != m2) {
        printf("Matrix sizes do not match for multiplication.\n");
        return 1;
    }
    int c[n][k];
    for(int i=0; i<n; i++) {
        for(int j=0; j<k; j++) {
            c[i][j] = 0; 
            for(int p=0; p<m; p++) {
                c[i][j] += a[i][p] * b[p][j];
            }
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<k; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
