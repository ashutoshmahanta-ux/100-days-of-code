//Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int n, val;
    scanf("%d %d", &n, &val); 
    int m[n][n];

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    int diag[n];
    for(int i=0; i<n; i++) {
        diag[i] = m[i][i];
    }

    int distinct = 1;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(diag[i] == diag[j]) {
                distinct = 0;
                break;
            }
        }
        if(!distinct) break;
    }

    if(distinct) printf("True\n");
    else printf("False\n");

    return 0;
}
