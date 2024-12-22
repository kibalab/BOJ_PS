#include <stdio.h>

int main() {
    int count;

    scanf("%d", &count, &count);

    int numbers[count];

    for (int i = 0; i < count; i++) {
        scanf("%d", &numbers[i]);
    }

    int dp[count];
    dp[0] = numbers[0];
    int max = dp[0];
    for (int i = 1; i < count; i++) {
        dp[i] = numbers[i] + (dp[i - 1] > 0 ? dp[i - 1] : 0);
        if (dp[i] > max) {
            max = dp[i];
        }
    }

    printf("%d", max);

}