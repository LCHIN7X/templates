sort(intervals.begin(), intervals.end(), [](auto& a, auto& b) {
    return a.second < b.second;
});

int count = 0, end = -1;
for (auto& [start, finish] : intervals) {
    if (start >= end) {
        ++count;
        end = finish;
    }
}
