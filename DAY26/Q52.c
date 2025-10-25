//Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

#include <stdio.h>

int main() {
    int i, j;
    // i counts down how many stars in this group
    for(i = 5; i >= 1; i--) {
        // Print i stars, each on a separate line
        for(j = 1; j <= i; j++) {
            printf("*\n");
        }
        // Blank line for visible separation (only if not last group)
        if (i != 1)
            printf("\n");
    }
    return 0;
}
