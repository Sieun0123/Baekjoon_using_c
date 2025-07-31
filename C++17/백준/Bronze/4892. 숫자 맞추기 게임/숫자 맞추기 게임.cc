#include <stdio.h>

int main() {
    int numbers[100000];
    int count = 0;      
    int n;

    while (scanf("%d", &n) == 1 && n != 0) {
        numbers[count++] = n;
    }

    for (int i = 0; i < count; i++) {
        int n0 = numbers[i];
        int n1 = 3 * n0;

        int kind = n1 % 2;
        int n2 = (kind == 0) ? n1 / 2 : (n1 + 1) / 2;
        int n3 = 3 * n2;
        int n4 = n3 / 9;

        if (kind == 0)
            printf("%d. even %d\n", i + 1, n4);
        else
            printf("%d. odd %d\n", i + 1, n4);
    }

    return 0;
}
