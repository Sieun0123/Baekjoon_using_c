#include <stdio.h>

int main() {
    int a, b, c, d, e;
    int sum;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    sum = a * a + b * b + c * c + d * d + e * e;
    printf("%d\n", sum % 10);

    return 0;
}
