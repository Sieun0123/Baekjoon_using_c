#include <stdio.h>
#include <string.h>

int main() {
    int T;
    char str[51];

    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%s", str);

        int count = 0;
        int isValid = 1;  // VPS 여부

        for (int j = 0; j < strlen(str); j++) {
            if (str[j] == '(') {
                count++;
            } else {
                count--;
            }

            if (count < 0) {
                isValid = 0;
                break;
            }
        }

        if (count != 0) {
            isValid = 0;
        }

        if (isValid) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
