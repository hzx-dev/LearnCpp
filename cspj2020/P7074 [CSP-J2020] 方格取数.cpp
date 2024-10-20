#include <iostream>
#include <stack>

using namespace std;

int map[10003][10003];
int vis[10003][10003];

int dx[3] = {-1, 1, 0};
int dy[3] = {0, 0, 1};

int n, m;

stack<pair<int, int>> s;

int mv = -0x3f3f3f3f;


int dfs(int x, int y, int tot) {
    // cout << x << " " << y << endl;
    vis[x][y] = 1; // 标记

    if (x == n && y == m) {
        // 更新最大值
        mv = max(mv, tot);
        // cout << "到达终点" <<n << " " << m <<"tot"<<tot<< endl;
        return true;
    }

    for (int i = 0; i < 3; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (map[nx][ny] != 0 && vis[nx][ny] == 0) { // 不在边缘
            vis[nx][ny] = 1;
            dfs(nx, ny, tot + map[nx][ny]);
            // cout << "123" << endl;
            vis[nx][ny] = 0;
        }
    }

    return 0;
}


int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> map[i][j];
        }
    }

    dfs(1, 1, map[1][1]);

    cout << mv;

    return 0;
}


