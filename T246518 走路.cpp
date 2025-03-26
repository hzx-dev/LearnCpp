#include <iostream>

using namespace std;

int a[2005][2005];
int dp[2005][2005]; // dp[i][j] 表示可以走过的最小值
int n, m;

int main() {
    cin >> n >> m;
    // 是 m 行 n 列

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i == 1) dp[j][i] = a[j][i];
            else {
                dp[j][i] = dp[j][i - 1] + a[j][i];
                if (j == 1) {
                    dp[j][i] = min(dp[m][i - 1] + a[j][i], dp[j][i]);
                } else {
                    dp[j][i] = min(dp[j - 1][i - 1] + a[j][i], dp[j][i]);
                }
            }
        }
    }

    // for (int i = 1; i <= m; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         cout << dp[i][j] << '\t';
    //     }
    //     cout << endl;
    // }

    int ans = 0x7f7f7f7f;

    for (int i = 1; i <= m; i++) {
        ans = min(ans, dp[i][n]);
    }

    cout << ans;

    return 0;
}
