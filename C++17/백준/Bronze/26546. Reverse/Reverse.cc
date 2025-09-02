#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        char str[101];
        int i, j;
        scanf("%s %d %d", str, &i, &j);

        int len = strlen(str);

        // 앞부분 출력
        for (int k = 0; k < i; k++) {
            printf("%c", str[k]);
        }
        // 뒷부분 출력
        for (int k = j; k < len; k++) {
            printf("%c", str[k]);
        }
        printf("\n");
    }

    return 0;
}
