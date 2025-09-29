//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.


Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2


#include <stdio.h>

int main() {
    int sec, h, m, s;
    printf("Input seconds: ");
    scanf("%d", &sec);

    h = (sec / 3600);            // Calculate hours
    m = (sec - (3600 * h)) / 60; // Calculate minutes
    s = (sec - (3600 * h) - (m * 60)); // Calculate remaining seconds

    printf("H:M:S - %d:%d:%d\n", h, m, s);
    return 0;
}
