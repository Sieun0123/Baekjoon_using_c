#include <stdio.h>

int main()
{
    int o, w, n;
    char c;
    int scenario = 1;

    while (1) {
        scanf("%d %d", &o, &w);
        if (o == 0 && w == 0) break;
    
        int dead = 0;
        while (1) {
            scanf(" %c %d", &c, &n);
            if (c == '#') break;
            if (!dead) {
                if (c == 'F') w += n;
                else if (c == 'E') w -= n;
                if (w <= 0) dead = 1;
            }
        }
    
        if (dead) printf("%d RIP\n", scenario);
        else if (w > o / 2 && w < o * 2) printf("%d :-)\n", scenario);
        else printf("%d :-(\n", scenario);
    
        scenario++;
    }
}
