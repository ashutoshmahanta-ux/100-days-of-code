//Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[101], str2[101];
    scanf("%s %s", str1, str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2) {
        printf("Not anagrams\n");
        return 0;
    }

    int count1[26] = {0}, count2[26] = {0};
    for (int i = 0; i < len1; i++) {
        count1[str1[i] - 'a']++;
        count2[str2[i] - 'a']++;
    }

    int is_anagram = 1; 
    for (int i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            is_anagram = 0;
            break;
        }
    }

    if (is_anagram)
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");
    return 0;
}
