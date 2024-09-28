#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

const int MAXN = 1005;
int n;
int map[MAXN][MAXN];
bool visited[MAXN][MAXN];

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

struct Position {
    int x, y, distance;
};

int bfs(int x1, int y1, int x2, int y2) {
    queue<Position> q;
    Position start = {x1, y1, 0};
    q.push(start);
    visited[x1][y1] = true;

    while (!q.empty()) {
        Position cur = q.front();
        q.pop();

        if (cur.x == x2 && cur.y == y2) {
            return cur.distance;
        }

        for (int i = 0; i < 4; i++) {
            int nx = cur.x + dx[i];
            int ny = cur.y + dy[i];

            if (nx >= 1 && nx <= n && ny >= 1 && ny <= n &&!visited[nx][ny] && map[nx][ny] == 0) {
                visited[nx][ny] = true;
                q.push({nx, ny, cur.distance + 1});
            }
        }
    }
    return -1;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            char c;
            cin >> c;
            map[i][j] = c - '0';
        }
    }

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    memset(visited, false, sizeof(visited));

    int distance = bfs(x1, y1, x2, y2);

    cout << distance << endl;

    return 0;
}