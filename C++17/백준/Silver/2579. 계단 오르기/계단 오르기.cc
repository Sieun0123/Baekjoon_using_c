#include <stdio.h>
int main(){
    int n;
    int score[301] = {0};
    int dp[301] = {0};
    
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        scanf("%d", &score[i]);
    }
    dp[1] = score[1];
    dp[2] = score[1] + score[2];
    dp[3] = (score[1] + score[3] > score[2] + score[3])?
             score[1] + score[3] : score[2] + score[3];
    for (int i=4; i<=n; i++){
        dp[i] = (dp[i-3]+score[i-1]+score[i] > dp[i-2]+score[i])?
                 dp[i-3]+score[i-1]+score[i] : dp[i-2]+score[i];
    }
    printf("%d\n", dp[n]);
}