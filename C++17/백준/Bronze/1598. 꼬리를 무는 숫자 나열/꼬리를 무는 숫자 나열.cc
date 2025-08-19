#include <stdio.h>
#include <stdlib.h> // abs() 함수 사용

int main()
{
  long long a, b;
  scanf("%lld %lld", &a, &b);

  long long row1 = (a - 1) % 4;
  long long col1 = (a - 1) / 4;
  long long row2 = (b - 1) % 4;
  long long col2 = (b - 1) / 4;

  long long distance = llabs(row1 - row2) + llabs(col1 - col2);

  printf("%lld\n", distance);

  return 0;
}
