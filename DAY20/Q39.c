//Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int num, digit;
    int product = 1, has_odd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;        
        if (digit % 2 != 0) {    
            product *= digit;    
            has_odd = 1;         
        }
        num = num / 10;         
    }

    printf("Product of odd digits: %d\n", product);

    return 0;
}
