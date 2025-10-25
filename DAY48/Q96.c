//Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

int main() {
    char str[201];
    fgets(str, 201, stdin); 

    int i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ') {
            printf(" ");
            i++;
            continue;
        }

        int start = i;
        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            i++;
        }
        int end = i - 1;
=
        for (int j = end; j >= start; j--) {
            printf("%c", str[j]);
        }

    }
    printf("\n");
    return 0;
}
