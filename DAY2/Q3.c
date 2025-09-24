// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.


/*
Sample Test Cases:
Input 1:
6 9
Output 1:
Area=54, Perimeter=30

Input 2:
4 12
Output 2:
Area=48, Perimeter=32
*/

#include <stdio.h>

int main() {
    int length, breadth;
    scanf("%d %d", &length, &breadth);
    
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    
    printf("Area=%d, Perimeter=%d\n", area, perimeter);
    return 0;
}
