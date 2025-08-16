#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int nums[4] = {a, b, c, d};
    int ans = 0;

    // 4! = 24가지 순열을 전부 체크
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (j == i) continue;
            for (int k = 0; k < 4; k++) {
                if (k == i || k == j) continue;
                for (int l = 0; l < 4; l++) {
                    if (l == i || l == j || l == k) continue;

                    int perm[4] = {nums[i], nums[j], nums[k], nums[l]};

                    // 가로 = (첫번째, 세번째) 중 작은 값
                    int width = perm[0] < perm[2] ? perm[0] : perm[2];
                    // 세로 = (두번째, 네번째) 중 작은 값
                    int height = perm[1] < perm[3] ? perm[1] : perm[3];

                    int area = width * height;
                    if (area > ans) ans = area;
                }
            }
        }
    }

    printf("%d\n", ans);
    return 0;
}
