//Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
#include <stdio.h>

int main() {
    int a = 0, b = 0, c = 0;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    c = a + b;
    printf("The sum of a and b is %d\n", c);

    return 0;
}
