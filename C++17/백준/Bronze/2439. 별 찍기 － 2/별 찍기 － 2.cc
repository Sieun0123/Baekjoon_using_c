#include <stdio.h>

int main()
{
  int num;

  scanf("%d", &num);
  for (int i = 0; i < num; i++)
  {
    for (int j = i+1; j < num; j++)
    {
      printf(" ");
    }
    for (int k = 0; k <= i; k++)
    {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}