//Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    int result[n];
    for(int i=0; i<k; i++) {
        result[i] = arr[n-k+i];
    }
    for(int i=k; i<n; i++) {
        result[i] = arr[i-k];
    }

    for(int i=0; i<n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}
