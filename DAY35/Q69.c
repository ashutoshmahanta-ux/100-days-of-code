//Find the second largest element in an array.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    int second = -2147483648; 
    for(int i = 0; i < n; i++) {
        if(arr[i] != max && arr[i] > second) {
            second = arr[i];
        }
    }

    printf("%d\n", second);
    return 0;
}
