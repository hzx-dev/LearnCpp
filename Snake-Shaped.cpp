#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main() {
    int n;

    cin >> n;

    int triangle[n][n] = {0};
    memset(triangle, 0, sizeof(triangle));
    int x[4] = {0, 1, 0, -1};
    int y[4] = {1, 0, -1, 0};
    int row = 0, col = 0, d = 0, nr, nc;

    for(int i = 1; i <= n * n; i++)
    {
        triangle[row][col] = i;
        nr = row + x[d], nc = col + y[d];
        if(triangle[nr][nc] || nr > n - 1 || nr < 0 || nc > n - 1 || nc < 0)
            d = (d + 1) % 4;
        row += x[d];
        col += y[d];		
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setfill(' ') << setw(3) << triangle[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
