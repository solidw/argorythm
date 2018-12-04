#include <stdio.h>
int main() {
    int dp[41][2];
    int sc[41];
    int tc, i;

    scanf("%d", &tc);

    dp[0][0] = 1;
    dp[0][1] = 0;
    dp[1][0] = 0;
    dp[1][1] = 1;
    for(i=2; i<41; i++) {
        dp[i][0] = dp[i-1][0] + dp[i-2][0];
        dp[i][1] = dp[i-1][1] + dp[i-2][1];
    }
    
    for(i=0; i<tc; i++) {
        scanf("%d", &sc[i]);
    }

    for(i=0; i<tc; i++) {
        printf("%d %d\n", dp[sc[i]][0], dp[sc[i]][1]);
    }

    return 0;
}
