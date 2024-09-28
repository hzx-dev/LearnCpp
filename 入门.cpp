#include <iostream>
using namespace std;

int n, m, cnt = 1;
char a[1000][1000];
bool vis[1000][1000];

void dfs(int x, int y)
{
    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {1, -1, 0, 0};
    for (int i = 0; i < 4; i++)
    {
        int xx = x + dx[i];
        int yy = y + dy[i];
        if (a[xx][yy] == '.' && vis[xx][yy] != true)
        {
            cnt++;
            vis[xx][yy] = true;
            dfs(xx, yy);
        }
    }
    return;
}

int main()
{
    int w, e;
    cin >> m >> n;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            a[i][j] = '0';
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == '@')
            {
                w = i, e = j;
            }
        }
    }

    dfs(w, e);

    cout << cnt << endl;
}