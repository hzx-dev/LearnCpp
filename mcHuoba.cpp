#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    
    int blocks[n + 1][n + 1] = {0};
    memset(blocks, 0, sizeof(blocks));

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        for (int j = -2; j <= 2; j++) {
            if (x + j <= n && x + j >= 1) blocks[x + j][y] = 1;
            if (y + j >= 1 && y + j <= n) blocks[x][y + j] = 1;
        }
        if (x + 1 >= 1 && x + 1 <= n && y + 1 >= 1 && y + 1 <= n) blocks[x + 1][y + 1] = 1;
        if (x - 1 >= 1 && x - 1 <= n && y - 1 >= 1 && y - 1 <= n) blocks[x - 1][y - 1] = 1;
        if (x + 1 >= 1 && x + 1 <= n && y - 1 >= 1 && y - 1 <= n) blocks[x + 1][y - 1] = 1;
        if (x - 1 >= 1 && x - 1 <= n && y + 1 >= 1 && y + 1 <= n) blocks[x - 1][y + 1] = 1;
    }

    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        for (int j = -2; j <= 2; j++) for (int l = -2; l <= 2; l++) 
            if (x + j >= 1 && x + j <= n && y + l >= 1 && y + l <= n) blocks[x + j][y + l] = 1;
    }

    int count = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << blocks[i][j] << " ";
            if (blocks[i][j] != 1) {
                count++;
            }
        }
        cout << endl;
    }

    cout << count << endl;

    return 0;
}