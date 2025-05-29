vector<int> dp(W + 1, 0);
for (int i = 0; i < n; ++i) {
    for (int w = W; w >= weight[i]; --w) {
        dp[w] = max(dp[w], dp[w - weight[i]] + value[i]);
    }
}
