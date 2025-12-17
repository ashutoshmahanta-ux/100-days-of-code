//Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int n, val, sum = 0;
    scanf("%d %d", &n, &val); 
    int m[n][n];

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    for(int i=0; i<n; i++) {
        sum += m[i][i];
    }

    printf("%d\n", sum);
    return 0;
}
