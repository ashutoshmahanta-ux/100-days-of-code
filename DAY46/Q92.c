//Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char str[101];
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            for (int j = i + 1; str[j] != '\0'; j++) {
                if (str[j] == str[i]) {
                    printf("%c\n", str[i]);
                    return 0;
                }
            }
        }
    }
    return 0;
}
