//Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++) {
        isPrime = 1;  
        for(j = 2; j <= i - 1; j++) {
            if(i % j == 0) {
                isPrime = 0;  
                break;
            }
        }
        if(isPrime == 1)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
