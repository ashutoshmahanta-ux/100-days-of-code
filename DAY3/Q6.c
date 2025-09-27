//Q6: Write a program to swap two numbers using a third variable.


Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1


#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int A,B,C;
   
    printf("Enter A: ");
    scanf("%d",&A);
   
    printf("Enter B: ");
    scanf("%d", &B);
   
    printf("The entered number is: %d %d\n", A,B);
    C=B; B=A;;
   
    printf("The number after swap is: %d %d", C,B);
    return 0;

}