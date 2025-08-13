#include <stdio.h>

int main(void)
{
  long long A, B, C, D;
  if (scanf("%lld %lld", &A, &B) != 2)
    return 0;
  if (scanf("%lld %lld", &C, &D) != 2)
    return 0;

  long long num[4], den[4];

  num[0] = A * D + B * C;
  den[0] = C * D;
  num[1] = C * B + A * D;
  den[1] = D * B;
  num[2] = D * A + C * B;
  den[2] = B * A;
  num[3] = B * C + D * A;
  den[3] = A * C;

  int best = 0;
  for (int i = 1; i < 4; ++i)
  {
    long long lhs = num[i] * den[best];
    long long rhs = num[best] * den[i];
    if (lhs > rhs)
      best = i;
  }

  printf("%d\n", best);
  return 0;
}
