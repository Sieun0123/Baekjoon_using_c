#include <stdio.h>

int main()
{
  int x, y, w, h;
  scanf("%d %d %d %d", &x, &y, &w, &h);

  int min_dist = x;
  if (y < min_dist)
    min_dist = y;
  if (w - x < min_dist)
    min_dist = w - x;
  if (h - y < min_dist)
    min_dist = h - y;

  printf("%d\n", min_dist);
  return 0;
}
