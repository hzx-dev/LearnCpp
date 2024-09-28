#include <iostream>
#include <queue>

using namespace std;

const int VISITED = 114514;
const int WALL = -114514;

int map[505][505];

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

struct Node {
    int x, y;
};

int bfs(int x, int y) {
    queue<Node> q;
    q.push({x, y});
    map[0][0] = VISITED;
    while (!q.empty()) {
        Node cur = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = cur.x + dx[i];
            int ny = cur.y + dy[i];
            if (nx < 0 || nx >= x + 1 || ny < 0 || ny >= y + 1) continue;
            if (map[nx][ny] == WALL) continue;
            if (map[nx][ny] == 0) {
                map[nx][ny] = VISITED;
                q.push({nx, ny});
            }
        }
    }
    return 1;
}

int main()
{
    int x, y;

    cin >> x >> y;

    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= y; j++) {
            char tmp;
            cin >> tmp;
            if (tmp == '*') map[i][j] = WALL;
            else map[i][j] = 0;
        }
    }

    bfs(x, y);

    int cnt = 0;

    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= y; j++) {
            if (map[i][j] == 0) cnt++;
        }
    }

    cout << cnt << endl;
    
    return 0;
}
