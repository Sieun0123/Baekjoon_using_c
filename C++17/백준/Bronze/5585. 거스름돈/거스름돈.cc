#include <stdio.h>

int main() {
    int n, change, sum = 0;
    scanf("%d", &n);

    change = 1000 - n;

    int coins[] = {500, 100, 50, 10, 5, 1};
    for (int i = 0; i < 6; i++) {
        sum += change / coins[i];
        change %= coins[i];
    }

    printf("%d\n", sum);
    return 0;
}
