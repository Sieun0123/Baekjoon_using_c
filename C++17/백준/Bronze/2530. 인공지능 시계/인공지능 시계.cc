#include <stdio.h>

int main() {
    int A, B, C; 
    int D;

    scanf("%d %d %d", &A, &B, &C);
    scanf("%d", &D);

    int total_seconds = A * 3600 + B * 60 + C + D;

    int hour = (total_seconds / 3600) % 24;
    int minute = (total_seconds % 3600) / 60;
    int second = total_seconds % 60;

    printf("%d %d %d\n", hour, minute, second);

    return 0;
}
