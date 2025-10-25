//Write a program to check if a number is a perfect number.

#include <stdio.h>

int main() {
    int num, sum = 0, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i < num; i++) {
        if (num % i == 0)
            sum += i;  
    }

    if (sum == num)
        printf("Perfect number\n");
    else
        printf("Not perfect number\n");

    return 0;
}

