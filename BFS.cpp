queue<pair<int, int>> q;
vector<vector<bool>> visited(n, vector<bool>(m, false));

q.push({sx, sy});
visited[sx][sy] = true;

while (!q.empty()) {
    auto [x, y] = q.front(); q.pop();
    for (int d = 0; d < 4; ++d) {
        int nx = x + dx[d], ny = y + dy[d];
        if (inBounds(nx, ny) && !visited[nx][ny]) {
            visited[nx][ny] = true;
            q.push({nx, ny});
        }
    }
}
