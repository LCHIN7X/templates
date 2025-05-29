int binarySearch(int low, int high) {
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (condition(mid)) {
            high = mid; // or low = mid + 1 for upper bound
        } else {
            low = mid + 1; // or high = mid - 1
        }
    }
    return low; // or high based on implementation
}
