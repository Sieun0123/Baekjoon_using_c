#include <stdio.h>

int main() {
    int N, x, count = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &x);
        if (x < 2) continue;

        int is_prime = 1;
        for (int j = 2; j * j <= x; j++) {
            if (x % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) count++;
    }
    printf("%d\n", count);
    return 0;
}