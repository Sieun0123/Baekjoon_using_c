#include <stdio.h>

int main() {
    int num, max = 0;
    int index = 0;

    for (int i = 0; i < 9; i++) {
        scanf("%d", &num);
        if (num > max) {
            max = num;
            index = i + 1; // 인덱스를 1부터 세기 위해 +1
        }
    }

    printf("%d\n", max);
    printf("%d\n", index);

    return 0;
}
