#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int count = 0;

    for (int a = 1; a <= N / 3; a++) {
        for (int b = a; b <= (N - a) / 2; b++) {
            int c = N - a - b;
            if (c < b) continue;
            if (a + b > c) count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
