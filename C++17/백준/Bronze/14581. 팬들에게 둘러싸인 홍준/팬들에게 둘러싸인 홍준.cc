#include <stdio.h>

int main() {
    char name[21]; // 최대 20자 + '\0'
    scanf("%s", name);

    printf(":fan::fan::fan:\n");
    printf(":fan::%s::fan:\n", name);
    printf(":fan::fan::fan:\n");

    return 0;
}
