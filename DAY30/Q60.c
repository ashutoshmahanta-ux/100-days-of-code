//Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main() {
    int n, i, num;
    int pos = 0, neg = 0, zero = 0;

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &num);
        if(num > 0)
            pos++;
        else if(num < 0)
            neg++;
        else
            zero++;
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", pos, neg, zero);
    return 0;
}
