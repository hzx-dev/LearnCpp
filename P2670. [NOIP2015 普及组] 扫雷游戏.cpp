#include <iostream>

using namespace std;

char board[105][105];
int dx[8] = {0, 1, 0, -1, 1, -1, -1, 1};
int dy[8] = {1, 0, -1, 0, 1, -1, 1, -1};

int main()
{
    int n, m;

    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)
            cin >> board[i][j];
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (board[i][j] == '*') {
                cout << '*';
                continue;
            }
            int cnt = 0;
            for (int d = 0; d < 8; d++) {
                cnt += (board[i + dx[d]][j + dy[d]] == '*') ? 1 : 0;
            }
            cout << cnt;
        }
        cout << endl;
    }

    return 0;
}
