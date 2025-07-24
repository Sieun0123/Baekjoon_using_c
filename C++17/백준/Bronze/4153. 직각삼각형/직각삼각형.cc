#include <stdio.h>

int main() {
    int a, b, c;

    while (1) {
        scanf("%d %d %d", &a, &b, &c);
        if (!a && !b && !c) break;

        int max = a, x = b, y = c;
        if (b > max) max = b, x = a, y = c;
        if (c > max) max = c, x = a, y = b;

        printf("%s\n", max*max == x*x + y*y ? "right" : "wrong");
    }

    return 0;
}
