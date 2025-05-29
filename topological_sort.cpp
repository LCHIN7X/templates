vector<int> indegree(n, 0);
for (auto& u : graph)
    for (int v : u) indegree[v]++;

queue<int> q;
for (int i = 0; i < n; ++i)
    if (indegree[i] == 0) q.push(i);

vector<int> topo;
while (!q.empty()) {
    int u = q.front(); q.pop();
    topo.push_back(u);
    for (int v : graph[u]) {
        if (--indegree[v] == 0) q.push(v);
    }
}
