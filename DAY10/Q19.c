#include <stdio.h> 

int main() {
    float a, b, c;  

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);  // taking input from user

    // check all sides equal
    if (a == b && b == c) {
        printf("This is an Equilateral triangle.\n");
    }
    // check any two sides equal
    else if (a == b || b == c || a == c) {
        printf("This is an Isosceles triangle.\n");
    }
    // if no sides equal
    else {
        printf("This is a Scalene triangle.\n");
    }

    return 0;  // program ends
}
