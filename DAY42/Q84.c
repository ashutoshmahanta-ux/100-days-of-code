//Convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>

int main() {
    char str[100];
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - ('a' - 'A'); 
        }
        printf("%c", ch);
    }
    printf("\n");
    return 0;
}
