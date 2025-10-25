//Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[101];
    fgets(name, 101, stdin); 
    int len = strlen(name);
    if(name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }

    int lastSpace = -1;
    for(int i = 0; i < len; i++) {
        if(name[i] == ' ')
            lastSpace = i;
    }

    if(name[0] != ' ') {
        printf("%c.", toupper(name[0]));
    }
    for(int i = 1; i < lastSpace; i++) {
        if(name[i - 1] == ' ' && name[i] != ' ') {
            printf("%c.", toupper(name[i]));
        }
    }

    if(lastSpace != -1) {
        int j = lastSpace + 1;
        while(name[j] == ' ' && j < len) j++;
        printf(" ");
        while(j < len && name[j] != ' ') {
            printf("%c", name[j]);
            j++;
        }
    }
    printf("\n");
    return 0;
}
