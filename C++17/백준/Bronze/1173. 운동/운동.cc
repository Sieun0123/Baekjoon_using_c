#include <stdio.h>

int main() {
    int N, m, M, T, R;
    scanf("%d %d %d %d %d", &N, &m, &M, &T, &R);

    if (m + T > M) {
        printf("-1\n");
        return 0;
    }

    int pulse = m;
    int time = 0;
    int exercise = 0;

    while (exercise < N) {
        if (pulse + T <= M) {
            pulse += T;
            exercise++;
        } else {
            pulse -= R;
            if (pulse < m) pulse = m;
        }
        time++;
    }

    printf("%d\n", time);
    return 0;
}
