#include <stdio.h>

int main() {
    int score[5][4];
    int total, maxScore = 0, winner = 0;

    for (int i = 0; i < 5; i++) {
        total = 0;
        for (int j = 0; j < 4; j++) {
            scanf("%d", &score[i][j]);
            total += score[i][j];
        }
        if (total > maxScore) {
            maxScore = total;
            winner = i + 1;
        }
    }

    printf("%d %d\n", winner, maxScore);
    return 0;
}
