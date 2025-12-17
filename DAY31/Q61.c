//Search for an element in an array using linear search.

#include <stdio.h>

int main() {
    int n, i, arr[100], target, found = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    for(i = 0; i < n; i++) {
        if(arr[i] == target) {
            printf("Found at index %d\n", i);
            found = 1; 
            break;     
        }
    }

    if(found == 0) {
        printf("-1\n");
    }

    return 0;
}
