//Reverse a string.

#include <stdio.h>

int main() {
    char str[100];
    int len = 0;
    scanf("%s", str); 

    while(str[len] != '\0') {
        len++;
    }

    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
