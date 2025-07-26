#include <stdio.h>

int main() {
    int nums[100];
    int count = 0;
    int N;

    while (1) {
        scanf("%d", &N);
        if (N == 0) break;
        nums[count++] = N;
    }

    for (int i = 0; i < count; i++) {
        N = nums[i];
        while (N >= 10) {
            int sum = 0;
            while (N > 0) {
                sum += N % 10;
                N /= 10;
            }
            N = sum;
        }
        printf("%d\n", N);
    }

    return 0;
}
