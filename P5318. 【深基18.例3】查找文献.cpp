#include <bits/stdc++.h>

using namespace std;

map<int, vector<int>> mp;
int visited[100005];

void dfs(int x) {
    visited[x] = 1;
    cout << x << " ";
    for (auto item : mp[x]) {
        if (visited[item]) continue;
        dfs(item);
    }
}

void bfs(int x) {
    queue<int> q;
    q.push(x);
    visited[x] = 1;
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        cout << cur << " ";
        for (auto item : mp[cur])  {
            if (visited[item]) continue;
            visited[item] = 1;
            q.push(item);
        }
    }
}


int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        mp[x].push_back(y);
    }

    for (auto item : mp) {
        // 排序
        sort(item.second.begin(), item.second.end());
    }

    dfs(1);
    memset(visited, 0, sizeof(visited));
    cout << endl;
    bfs(1);

    return 0;
}
