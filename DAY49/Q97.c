//Print the initials of a name.

#include <stdio.h>
#include <ctype.h>  

int main() {
    char name[101];
    fgets(name, 101, stdin); 

    if (name[0] != ' ' && name[0] != '\n') {
        printf("%c.", toupper(name[0]));
    }

    for (int i = 1; name[i] != '\0' && name[i] != '\n'; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ') {
            printf("%c.", toupper(name[i]));
        }
    }
    printf("\n");
    return 0;
}
