#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int maxPrize = 0; // 가장 큰 상금을 저장할 변수

    for (int i = 0; i < N; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        int prize = 0;

        if (a == b && b == c) {
            // 같은 눈 3개
            prize = 10000 + a * 1000;
        } else if (a == b || a == c) {
            // 같은 눈 2개 (a와 b, 또는 a와 c)
            prize = 1000 + a * 100;
        } else if (b == c) {
            // 같은 눈 2개 (b와 c)
            prize = 1000 + b * 100;
        } else {
            // 모두 다른 눈
            int max = a;
            if (b > max) max = b;
            if (c > max) max = c;
            prize = max * 100;
        }

        if (prize > maxPrize) {
            maxPrize = prize;
        }
    }

    printf("%d\n", maxPrize);
    return 0;
}
