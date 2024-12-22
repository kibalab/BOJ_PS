#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int count;

    scanf("%d", &count, &count);

    int numbers[count];

    for (int i = 0; i < count; i++) {
        scanf("%d", &numbers[i]);
    }

    int dp[count];
    dp[0] = numbers[0];
    int maximum = dp[0];
    for (int i = 1; i < count; i++) {
        dp[i] = max(numbers[i], numbers[i] + dp[i - 1]);
        if (dp[i] > maximum) {
            maximum = dp[i];
        }
    }

    printf("%d", maximum);
}
