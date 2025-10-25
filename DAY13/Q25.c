#include <stdio.h>

int main() {
    int a, b, result;
    char op;
    scanf("%d %d %c", &a, &b, &op);

    switch(op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/': 
            if (b != 0) result = a / b;
            else {
                printf("Division by zero not allowed\n");
                return 0;
            }
            break;
        case '%': 
            if (b != 0) result = a % b;
            else {
                printf("Division by zero not allowed\n");
                return 0;
            }
            break;
        default: 
            printf("Invalid operator\n");
            return 0;
    }
    printf("%d\n", result);
    return 0;
}
