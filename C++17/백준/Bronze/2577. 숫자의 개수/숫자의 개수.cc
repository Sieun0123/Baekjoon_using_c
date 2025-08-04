#include <stdio.h>

int main(void)
{
  int A, B, C;
  int result[10] = {0};

  scanf("%d %d %d", &A, &B, &C);
  int multiple = A * B * C;

  while (multiple > 0)
  {
    int digit = multiple % 10;
    result[digit]++;
    multiple /= 10;
  }

  for (int i = 0; i < 10; i++)
  {
    printf("%d\n", result[i]);
  }

  return 0;
}
