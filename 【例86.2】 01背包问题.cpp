// 01背包问题，一道非常经典的动态规划问题。

#include <iostream>

using namespace std;

int dp[205][2005]; // dp[i][j]表示前i件物品恰好放入一个容量为j的背包可以获得的最大价值
int w[205], v[205]; // w[i]表示第i件物品的重量，v[i]表示第i件物品的价值

int main()
{
    int n, m; // 物品个数

    cin >> m >> n; // 输入物品个数和背包容量 

    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i]; // 输入第i件物品的重量和价值
    }

    // 开始计算dp数组

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (w[i] > j) { // 如果背包容量不足，则dp[i][j]等于dp[i-1][j]
                dp[i][j] = dp[i-1][j];
            }
            else { // 如果背包容量足够，则dp[i][j]等于max(dp[i-1][j], dp[i-1][j-w[i]] + v[i])
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
            }
        }
    }

    cout << dp[n][m];
    
    return 0;
}
