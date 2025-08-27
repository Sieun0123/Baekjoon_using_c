#include <stdio.h>

int main(void) {
    int out, in;
    int now = 0;      // 현재 기차 안 사람 수
    int max = 0;      // 최대 인원 수

    for (int i = 0; i < 10; i++) {
        scanf("%d %d", &out, &in); // 내린 사람, 탄 사람 입력
        now -= out;   // 내린 사람 처리
        now += in;    // 탄 사람 처리

        if (now > max) {
            max = now; // 최대값 갱신
        }
    }

    printf("%d\n", max);
    return 0;
}
