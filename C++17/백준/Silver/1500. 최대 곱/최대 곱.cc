#include <stdio.h>

int main() {
    int S, K;
    scanf("%d %d", &S, &K);

    int q = S / K;
    int r = S % K;

    long long max_m = 1;

    for (int i = 0; i < K - r; i++) max_m *= q;
    for (int i = 0; i < r; i++)     max_m *= (q + 1);

    printf("%lld\n", max_m);
    return 0;
}
