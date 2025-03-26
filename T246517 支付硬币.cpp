#include <iostream>

using namespace std;

int a[10], c[1005], k[10] = {0, 1, 2, 3, 5, 10, 20};
bool dp[1005][20005]; // 二维数组 f[i,j] 表示前 i 枚硬币，是否可以凑到 j 元

int main() {
    cin >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> a[6];
    int x = a[1] + a[2] + a[3] + a[4] + a[5] + a[6]; // 计算有多少枚硬币
    int y = a[1] * 1 + a[2] * 2 + a[3] * 3 + a[4] * 5 + a[5] * 10 + a[6] * 20; // 计算总额

    int index = 1;
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= a[i]; j++) {
            c[index++] = k[i];
        }
    }

    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= y; j++) {
            if (dp[i - 1][j]) dp[i][j] = 1; // 如果刚刚就可以了，那么就可以了（好像有点废话）
            else if (c[i] == j) {
                // 刚刚好可以，前 i 枚硬币，可以凑到 j 元
                dp[i][j] = 1;
            } else {
            // 否则，尝试推出，逻辑：如果dp[i - 1][j - c[i]], 那么再加时一个c[i]（即可以凑出）。
                dp[i][j] = dp[i - 1][j - c[i]];
            }
        }
    }

    int ans = 0;

    for (int j = 1; j <= y; j++) {
        ans += dp[x][j];
    }

    printf("Total=%d", ans);

    return 0;
}
