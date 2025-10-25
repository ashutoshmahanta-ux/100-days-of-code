//Find the sum of array elements.

#include <stdio.h>

int main() {
    int n, i, sum = 0, arr[100]; // Declare variables

    // Step 1: Get number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Step 2: Input each element
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i]; // Step 3: Add to sum
    }

    // Step 4: Print result
    printf("%d\n", sum);

    return 0;
}
