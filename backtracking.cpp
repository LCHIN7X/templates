void backtrack(int start, vector<int>& path) {
    res.push_back(path);
    for (int i = start; i < nums.size(); ++i) {
        path.push_back(nums[i]);
        backtrack(i + 1, path);
        path.pop_back();
    }
}
