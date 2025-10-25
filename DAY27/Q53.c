//Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

#include <stdio.h>

int main() {
    int row, stars, n = 5; 

    for(row=1; row<=n; row++) {
        stars = 2 * row - 1;
        for(int j=1; j<=stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    for(row=n-1; row>=1; row--) {
        stars = 2 * row - 1;
        for(int j=1; j<=stars; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
