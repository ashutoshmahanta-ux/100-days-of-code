//Merge two arrays.

#include <stdio.h>

int main() {
    int n1, n2, arr1[100], arr2[100], merged[200];
    int i, j;

    scanf("%d", &n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
        merged[i] = arr1[i];  
    }

    scanf("%d", &n2);
    for(j = 0; j < n2; j++) {
        scanf("%d", &arr2[j]);
        merged[n1 + j] = arr2[j];  
    }

    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}
