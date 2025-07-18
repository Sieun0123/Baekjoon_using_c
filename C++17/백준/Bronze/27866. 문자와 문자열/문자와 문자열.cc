#include <stdio.h>

int main() {
    char S[1001];
    int i;

    scanf("%s", S);
    scanf("%d", &i);

    printf("%c\n", S[i - 1]); // C는 0부터 시작하므로 i-1
    return 0;
}
