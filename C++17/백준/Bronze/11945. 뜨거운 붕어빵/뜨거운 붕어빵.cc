#include <stdio.h>

int main(void) {
    int N, M;
    scanf("%d %d", &N, &M);
    
    char row[11 + 1];  // M(최대 10) + '\0' 저장 공간
    
    for (int i = 0; i < N; i++) {
        scanf("%s", row);      // 정확히 M자리 문자열 읽기
        for (int j = M - 1; j >= 0; j--) {
            putchar(row[j]);   // 뒤에서부터 출력
        }
        putchar('\n');
    }
    
    return 0;
}
