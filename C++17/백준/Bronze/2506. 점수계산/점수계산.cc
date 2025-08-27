#include <stdio.h>

int main()
{
  int N;
  scanf("%d", &N);

  int score = 0, streak = 0;
  for (int i = 0; i < N; i++)
  {
    int ans;
    scanf("%d", &ans);
    if (ans == 1)
    {
      streak++;
      score += streak;
    }
    else
    {
      streak = 0;
    }
  }

  printf("%d\n", score);
  return 0;
}
