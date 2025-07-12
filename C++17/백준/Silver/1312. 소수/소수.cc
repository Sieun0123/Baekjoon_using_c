#include <stdio.h>

int main() {
    int A, B, N;
    scanf("%d %d %d", &A, &B, &N);

    int remainder = A % B;
    int digit = 0;

    for (int i = 0; i < N; i++) {
        remainder *= 10;
        digit = remainder / B;
        remainder %= B;
    }

    printf("%d\n", digit);
    return 0;
}
