//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;
    int numerator = 1, denominator = 1;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1;
            numerator = 3;      
            denominator = 4;
        } else {
            sum += (float)numerator / denominator;
            numerator += 2;
            denominator += 2;
        }
    }

    printf("Approximate sum: %.1f\n", sum);
    return 0;
}
