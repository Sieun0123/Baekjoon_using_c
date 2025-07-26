#include <stdio.h>

int main() {
    int a, b, c;
    int max, mid, min;

    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        max = a;
        mid = (b > c) ? b : c;
        min = (b < c) ? b : c;
    } else if (b > a && b > c) {
        max = b;
        mid = (a > c) ? a : c;
        min = (a < c) ? a : c;
    } else {
        max = c;
        mid = (a > b) ? a : b;
        min = (a < b) ? a : b;
    }

    printf("%d", mid);
    return 0;
}
