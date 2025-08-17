#include <stdio.h>

int main() {
    int a, b, c, d;
    for (int i = 0; i < 3; i++) {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int zero_count = 0;
        if (a == 0) zero_count++;
        if (b == 0) zero_count++;
        if (c == 0) zero_count++;
        if (d == 0) zero_count++;
        
        switch (zero_count) {
            case 0: printf("E\n"); break; // 모
            case 1: printf("A\n"); break; // 도
            case 2: printf("B\n"); break; // 개
            case 3: printf("C\n"); break; // 걸
            case 4: printf("D\n"); break; // 윷
        }
    }
    return 0;
}
