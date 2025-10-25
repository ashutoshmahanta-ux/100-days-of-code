//Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, middle, num_digits, temp, swapped_num;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    num_digits = 0;
    while (temp != 0) {
        temp = temp / 10;
        num_digits++;
    }

    last = num % 10;

    temp = num;
    while (temp >= 10)
        temp = temp / 10;
    first = temp;

    if (num_digits == 1)
        swapped_num = num;
    else {

        int pow10 = pow(10, num_digits - 1);
        middle = (num % pow10) / 10;

        swapped_num = last * pow10 + middle * 10 + first;
    }

    printf("%d\n", swapped_num);
    return 0;
}