#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int time = 0;
    int k = 1;

    while (N > 0) {
        if (N < k)
            k = 1;
        N -= k;
        k++;
        time++;
    }

    printf("%d\n", time);
    return 0;
}
