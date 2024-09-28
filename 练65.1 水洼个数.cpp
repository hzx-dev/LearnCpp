#include <iostream>

using namespace std;

char sw[1005][1005];
int visited[1005][1005];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int dfs(int x, int y, int n, int m) {
    if (x < 1 || x > n || y < 1 || y > m) {
        return 0;
    }
    
    visited[x][y] = true;

    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (sw[nx][ny] == 'W' && not visited[nx][ny]) {
            visited[nx][ny] = true;
            dfs(nx, ny, n, m);
        }
    }

    return 0;
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> sw[i][j];
        }
    }

    int cnt = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (sw[i][j] == 'W' && not visited[i][j]) {
                cnt++;
                dfs(i, j, n, m);
            }
        }
    }

    cout << cnt << endl;
    
    return 0;
}
