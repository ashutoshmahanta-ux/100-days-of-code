//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.


Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76


#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, simple_interest, compound_interest;

    printf("Enter the principal: ");
    scanf("%f", &principal);

    printf("Enter the rate: ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    // Simple Interest formula
    simple_interest = (principal * rate * time) / 100;

    // Compound Interest formula (compounded annually)
    compound_interest = principal * pow((1 + rate / 100), time) - principal;

    printf("Simple Interest = %f\n", simple_interest);
    printf("Compound Interest = %f", compound_interest);

    return 0;
}
