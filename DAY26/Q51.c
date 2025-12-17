//Write a program to print the following pattern:
    5
   45
  345
 2345
12345


#include <stdio.h>

int main() {
    int row, s, num;
    for(row = 1; row <= 5; row++) {

        for(s = 1; s <= 5 - row; s++) {
            printf(" ");
        }
        for(num = 6 - row; num <= 5; num++) {
            printf("%d", num);
        }
        printf("\n");
    }
    return 0;
}
