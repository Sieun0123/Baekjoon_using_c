#include <stdio.h>

typedef __int128 int128;

int main() {
    for (int t = 0; t < 3; t++) {
        int n;
        scanf("%d", &n);

        int128 sum = 0;
        for (int i = 0; i < n; i++) {
            long long x;
            scanf("%lld", &x);
            sum += (int128)x;
        }

        if (sum > 0)
            printf("+\n");
        else if (sum < 0)
            printf("-\n");
        else
            printf("0\n");
    }
    return 0;
}
