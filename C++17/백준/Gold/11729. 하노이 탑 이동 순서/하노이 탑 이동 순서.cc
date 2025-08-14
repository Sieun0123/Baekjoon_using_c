#include <stdio.h>
#include <math.h>

void hanoi(int n, int from_pos, int to_pos, int aux_pos)
{
    if (n == 1) {
        printf("%d %d\n", from_pos, to_pos);
        return;
    }
    hanoi(n - 1, from_pos, aux_pos, to_pos);
    printf("%d %d\n", from_pos, to_pos);
    hanoi(n - 1, aux_pos, to_pos, from_pos);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%.0f\n", pow(2, n) - 1);
    hanoi(n, 1, 3, 2);

    return 0;
}
