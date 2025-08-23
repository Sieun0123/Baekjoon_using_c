#include <stdio.h>

int main(void) {
    unsigned long long S;
    if (scanf("%llu", &S) != 1) return 0;

    unsigned long long sum = 0;
    unsigned long long n = 0;

    while (sum + (n + 1) <= S) {
        n++;
        sum += n;
    }

    printf("%llu\n", n);
    return 0;
}
