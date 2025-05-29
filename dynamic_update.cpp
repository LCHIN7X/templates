void update(int node, int l, int r, int idx, int val) {
    if (l == r) {
        tree[node] = val;
        return;
    }
    int mid = (l + r) / 2;
    if (idx <= mid) update(2 * node, l, mid, idx, val);
    else update(2 * node + 1, mid + 1, r, idx, val);
    tree[node] = tree[2 * node] + tree[2 * node + 1];
}
