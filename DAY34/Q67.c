//Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int n, pos, x;
    scanf("%d", &n);
    int arr[n+1]; 
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &pos, &x);

    for(int i=n; i>pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = x; 

    for(int i=0; i<=n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
