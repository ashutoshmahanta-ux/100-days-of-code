//Find the maximum and minimum element in an array.

#include <stdio.h>

int main() {
    int n, i, sum = 0, arr[100]; 

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i]; 
    }

    printf("%d\n", sum);

    return 0;
}
