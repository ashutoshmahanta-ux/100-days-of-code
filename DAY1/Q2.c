/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2 */

#include<stdio.h>
int main()
{
  int a=0,b=0,sum=0,difference=0,product=0,quotient=0;
  printf("enter a:\n");
  scanf("%d", &a);
  printf("enter b\n");
  scanf("%d", &b);
  sum=a+b;
  difference=a-b;
  product=a*b;
  quotient=a/b;
printf("sum is:%d\n", sum);
printf("difference is: %d\n", difference);
printf("multiplication is: %d\n", product);
printf("quotient is: %d\n", quotient);
return 0;
}