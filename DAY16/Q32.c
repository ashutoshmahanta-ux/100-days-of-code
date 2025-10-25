//Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int num, reverse = 0, temp, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num; 

    while (temp > 0) {
        digit = temp % 10;         
        reverse = reverse * 10 + digit; 
        temp = temp / 10;         

    if (num == reverse) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}
