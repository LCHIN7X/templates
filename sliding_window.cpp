int sum = 0, maxSum = 0;
for (int i = 0; i < n; ++i) {
    sum += nums[i];
    if (i >= k) sum -= nums[i - k];
    if (i >= k - 1) maxSum = max(maxSum, sum);
}
