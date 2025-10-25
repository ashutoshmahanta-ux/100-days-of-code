#include <stdio.h>

int main() {
    int n, sum = 0, i, odd = 1;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        sum += odd;
        odd += 2;
    }
    printf("%d\n", sum);
    return 0;
}
