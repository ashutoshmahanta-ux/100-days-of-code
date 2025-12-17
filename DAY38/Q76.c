//Check if a matrix is symmetric.

#include <stdio.h>

int main() {
    int n, m, isSymmetric = 1;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    if(n != m) {
        printf("False\n");
        return 0;
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(arr[i][j] != arr[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if(!isSymmetric) break;
    }

    if(isSymmetric) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}
