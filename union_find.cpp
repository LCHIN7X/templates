vector<int> parent(n), rank(n, 0);

int find(int x) {
    if (x != parent[x])
        parent[x] = find(parent[x]); // path compression
    return parent[x];
}

void unite(int x, int y) {
    int rx = find(x), ry = find(y);
    if (rx == ry) return;
    if (rank[rx] < rank[ry]) parent[rx] = ry;
    else if (rank[rx] > rank[ry]) parent[ry] = rx;
    else parent[ry] = rx, rank[rx]++;
}
