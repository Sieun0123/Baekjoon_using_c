#include <stdio.h>

int main(void) {
    int N, K;
    if (scanf("%d %d", &N, &K) != 2) return 0;

    int cnt = 0;
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            cnt++;
            if (cnt == K) {
                printf("%d\n", i);
                return 0;
            }
        }
    }
    printf("0\n");
    return 0;
}
