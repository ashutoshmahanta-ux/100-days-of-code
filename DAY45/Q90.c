//Toggle case of each character in a string.

#include <stdio.h>

int main() {
    char str[100];
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A');
        }
        else if (ch >= 'a' && ch <= 'z') {
            ch = ch - ('a' - 'A');
        }
        printf("%c", ch);
    }
    printf("\n");
    return 0;
}
