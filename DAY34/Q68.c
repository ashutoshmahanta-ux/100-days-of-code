//Delete an element from an array.

#include <stdio.h>

int main() {
    int n, x, pos = -1;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);

    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            pos = i;
            break;
        }
    }

    if(pos == -1) {
        for(int i=0; i<n; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        for(int i=pos; i<n-1; i++) {
            arr[i] = arr[i+1];
        }

        for(int i=0; i<n-1; i++) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}
