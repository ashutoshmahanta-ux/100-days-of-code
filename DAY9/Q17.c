#include <stdio.h>

int main() {
    float a, b, c, d;
    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;

    if (d > 0) {
        printf("Roots are real and different.\n");
    } else if (d == 0) {
        printf("Roots are real and equal.\n");
    } else {
        printf("Roots are imaginary (complex).\n");
    }

    return 0;
}
