#include <stdio.h>

int main() {
    int n;
    static int counts[10001] = {0};
    int num;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        counts[num]++;
    }

    for (int i = 1; i <= 10000; i++) {
        while (counts[i]--) {
            printf("%d\n", i);
        }
    }

    return 0;
}
