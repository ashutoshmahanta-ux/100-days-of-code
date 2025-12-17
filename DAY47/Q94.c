//Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char line[201];
    fgets(line, 201, stdin); 

    int maxLen = 0, maxStart = 0;
    int currLen = 0, currStart = 0;
    int i = 0;

    while (1) {
        char ch = line[i];
        if (ch == ' ' || ch == '\n' || ch == '\0') {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = currStart;
            }
            currLen = 0;
            currStart = i + 1;
            if (ch == '\0' || ch == '\n') break;
        } else {
            currLen++;
        }
        i++;
    }

    for (int j = 0; j < maxLen; j++) {
        printf("%c", line[maxStart + j]);
    }
    printf("\n");
    return 0;
}
