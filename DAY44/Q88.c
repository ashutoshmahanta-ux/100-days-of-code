//Replace spaces with hyphens in a string.

#include <stdio.h>

int main() {
    char str[200];
    fgets(str, 200, stdin); 

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') break;
        if (str[i] == ' ')
            printf("-");
        else
            printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
