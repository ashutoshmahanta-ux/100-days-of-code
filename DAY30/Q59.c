//Count even and odd numbers in an array.

#include <stdio.h>

int main() {
    int n, i, num, even = 0, odd = 0;

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &num);
        if(num % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even=%d, Odd=%d\n", even, odd);
    return 0;
}
