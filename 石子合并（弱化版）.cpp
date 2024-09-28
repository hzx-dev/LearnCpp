#include <iostream>

using namespace std;

int dp[305][305], sum[305], m[305];
// dp[i][j] 表示从 i 到 j 的石子合并方案数

int main()
{
    int n, t;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> m[i];
        sum[i] = sum[i - 1] + m[i];
    }

    // 枚举区间长度

    for (int len = 2; len <= n; len++) {
        // 枚举起点
        for (int i = 1; i <= n - len + 1; i++) {
            // 枚举分割点
            int left = i; // 左区间
            int right = i + len - 1; // 右区间
            dp[left][right] = 0x3f3f3f3f; // 初始值设为极大值
            for (int k = left; k < right; k++) {
                // dp，启动！
                dp[left][right] = min(dp[left][k] + dp[k + 1][right] + sum[right] - sum[left - 1], dp[left][right]);
            }
        }
    }

    cout << dp[1][n] << endl;
    
    return 0;
}
