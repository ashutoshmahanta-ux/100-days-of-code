//Search in a sorted array using binary search.

#include <stdio.h>

int main() {
    int n, key;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &key);

    int left = 0, right = n-1, found = 0;
    while(left <= right) {
        int mid = (left + right) / 2;
        if(arr[mid] == key) {
            printf("Found at index %d\n", mid);
            found = 1;
            break;
        } else if(arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if(!found) {
        printf("-1\n");
    }
    return 0;
}
