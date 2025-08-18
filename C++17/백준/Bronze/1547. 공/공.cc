#include <stdio.h>

int main() {
    int M;
    scanf("%d", &M);

    int ball = 1;
    for (int i = 0; i < M; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        if (ball == X) {
            ball = Y;
        }
        else if (ball == Y) {
            ball = X;
        }
    }

    printf("%d\n", ball);

    return 0;
}
