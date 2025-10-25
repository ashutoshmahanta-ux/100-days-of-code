//Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

#include <stdio.h>

int main() {
    int row, space, star;
    for (row = 1; row <= 5; row++) {
        for (space = 1; space < row; space++) {
            printf(" ");
        }
        for (star = 1; star <= 6 - row; star++) {
            printf("*");
        }
        printf("\n"); 
    }
    return 0;
}
