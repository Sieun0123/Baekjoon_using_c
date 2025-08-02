#include <stdio.h>
#include <string.h>

int main() {
    char A[101], B[101];
    char op;

    scanf("%s", A);
    scanf(" %c", &op);
    scanf("%s", B);
    int lenA = strlen(A);
    int lenB = strlen(B);

    if (op == '*') {
        printf("1");
        for (int i = 0; i < (lenA - 1) + (lenB - 1); i++) {
            printf("0");
        }
    } else if (op == '+') {
        if (lenA == lenB) {
            printf("2");
            for (int i = 1; i < lenA; i++) {
                printf("0");
            }
        } else {
            char *big = lenA > lenB ? A : B;
            char *small = lenA > lenB ? B : A;
            int bigLen = strlen(big);
            int smallLen = strlen(small);
            int diff = bigLen - smallLen;

            for (int i = 0; i < diff; i++) {
                printf("%c", big[i]);
            }

            int sum = (big[diff] - '0') + (small[0] - '0');
            printf("%d", sum);

            for (int i = diff + 1; i < bigLen; i++) {
                printf("0");
            }

            printf("\n");
        }
    }

    return 0;
}
