#include <stdio.h>
#include <string.h>

int main() {
    char oct[333335];
    scanf("%s", oct);

    int len = strlen(oct);

    // 첫 자리 따로 처리
    int first = oct[0] - '0';
    if (first == 0) {
        printf("0\n");
        return 0;
    }

    // 첫 자리 이진수 (불필요한 0 제거해서 출력)
    if (first & 4) printf("1");
    if (first & 2 || first & 4) printf("%d", (first & 2) ? 1 : 0);
    printf("%d", (first & 1) ? 1 : 0);

    // 나머지 자리는 항상 3자리 출력
    for (int i = 1; i < len; i++) {
        int num = oct[i] - '0';
        printf("%d%d%d", (num >> 2) & 1, (num >> 1) & 1, num & 1);
    }
    printf("\n");

    return 0;
}
