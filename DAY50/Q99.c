//Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    scanf("%s", date);

    char day[3], month[3], year[5];
    strncpy(day, date, 2); day[2] = '\0';
    strncpy(month, date+3, 2); month[2] = '\0';
    strncpy(year, date+6, 4); year[4] = '\0';

    printf("%s-", day);
    if(strcmp(month, "04") == 0) {
        printf("Apr-");
    } else {
        printf("%s-", month);
    }
    printf("%s\n", year);

    return 0;
}
