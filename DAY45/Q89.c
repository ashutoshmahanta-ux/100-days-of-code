//Count frequency of a given character in a string.

#include <stdio.h>

int main() {
    char str[100];
    char ch;
    int count = 0;

    scanf("%s", str); 
    getchar();             
    scanf("%c", &ch); 

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}
