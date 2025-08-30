#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {
    int N;
    long long K;
    if (scanf("%d %lld", &N, &K) != 2) return 0;

    long long *A = (long long*)malloc(sizeof(long long) * (size_t)N);
    if (A == NULL) return 0;

    for (int i = 0; i < N; ++i) {
        if (scanf("%lld", &A[i]) != 1) { free(A); return 0; }
    }

    long long cnt = 0; // 교환 횟수

    for (int last = N - 1; last >= 1; --last) {
        int idx = 0;
        long long maxv = A[0];
        for (int j = 1; j <= last; ++j) {
            if (A[j] > maxv) {
                maxv = A[j];
                idx = j;
            }
        }
        if (idx != last) {
            long long x = A[idx];
            long long y = A[last];
            A[last] = x;
            A[idx] = y;

            cnt++;
            if (cnt == K) {
                if (x < y) printf("%lld %lld\n", x, y);
                else printf("%lld %lld\n", y, x);
                free(A);
                return 0;
            }
        }
    }

    printf("-1\n");
    free(A);
    return 0;
}
