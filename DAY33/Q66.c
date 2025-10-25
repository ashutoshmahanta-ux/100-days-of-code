//Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);
    int arr[n+1]; 
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);

    int i;
    for(i = n-1; (i >= 0 && arr[i] > x); i--) {
        arr[i+1] = arr[i];
    }
    arr[i+1] = x;

    for(int j=0; j<=n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");
    return 0;
}
