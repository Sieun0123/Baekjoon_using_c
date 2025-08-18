#include <stdio.h>

int main() {
    int out, in;
    int cur = 0;       // 현재 기차 안 인원
    int max = 0;       // 최대 인원 저장

    for (int i = 0; i < 4; i++) {
        scanf("%d %d", &out, &in);
        cur -= out;    // 내린 사람
        cur += in;     // 탄 사람
        if (cur > max) {
            max = cur; // 최대 인원 갱신
        }
    }

    printf("%d\n", max);
    return 0;
}
