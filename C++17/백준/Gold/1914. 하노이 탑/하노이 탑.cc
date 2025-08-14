#include <stdio.h>
#include <math.h>

void hanoi(int n, int from_pos, int to_pos, int aux_pos) {
    if (n == 1) {
        printf("%d %d\n", from_pos, to_pos);
        return;
    }
    hanoi(n - 1, from_pos, aux_pos, to_pos);
    printf("%d %d\n", from_pos, to_pos);
    hanoi(n - 1, aux_pos, to_pos, from_pos);
}
int main() {
    int n;
    scanf("%d", &n);

    if (n <= 20) {
        printf("%.0f\n", pow(2, n) - 1);
        hanoi(n, 1, 3, 2);
    } else {
        int arr[35] = {1};
        int len = 1;
        for (int i = 0; i < n; i++) {
            int carry = 0;
            for (int j = 0; j < len; j++) {
                int val = arr[j] * 2 + carry;
                arr[j] = val % 10;
                carry = val / 10;
            }
            if (carry) arr[len++] = carry;
        }
        arr[0] -= 1;
        for (int i = 0; i < len; i++) {
            if (arr[i] < 0) {
                arr[i] += 10;
                arr[i + 1]--;
            }
        }
        for (int i = len - 1; i >= 0; i--) printf("%d", arr[i]);
        printf("\n");
    }

    return 0;
}
