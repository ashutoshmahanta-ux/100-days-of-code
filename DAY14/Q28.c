#include <stdio.h>

int main() {
    int n, i, product = 1;
    scanf("%d", &n);

    for(i = 2; i <= n; i += 2) {
        product *= i;
    }
    printf("%d\n", product);
    return 0;
}
