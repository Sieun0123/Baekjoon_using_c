#include <stdio.h>

int main() {
    int A[1000], B[1000];
    int count = 0;

    while (1) {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0) break;

        A[count] = a;
        B[count] = b;
        count++;
    }

    for (int i = 0; i < count; i++) {
        printf("%d\n", A[i] + B[i]);
    }

    return 0;
}
