#include <stdio.h>

int main()
{
  int h, m, n;
  scanf("%d %d", &h, &m);
  scanf("%d", &n);

  int total = h * 60 + m + n;

  h = (total / 60) % 24;
  m = total % 60;
  
  printf("%d %d\n", h, m);
  return 0;
}