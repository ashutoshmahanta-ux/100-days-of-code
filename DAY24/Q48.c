//Write a program to print the following pattern:
1
12
123
1234
12345

#include <stdio.h>

int main() {
    int row, num;

    for(row = 1; row <= 5; row++) {

        for(num = 1; num <= row; num++) {
            printf("%d", num);
        }
        printf("\n");
    }
    return 0;
}
