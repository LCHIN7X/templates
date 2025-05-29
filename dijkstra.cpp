priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
vector<int> dist(n, INF);

pq.push({0, start});
dist[start] = 0;

while (!pq.empty()) {
    auto [d, u] = pq.top(); pq.pop();
    if (d > dist[u]) continue;
    for (auto [v, w] : graph[u]) {
        if (dist[v] > dist[u] + w) {
            dist[v] = dist[u] + w;
            pq.push({dist[v], v});
        }
    }
}
