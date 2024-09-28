#include <iostream>
#include <algorithm>

using namespace std;

int arr[1005];
int dp[1005]; // dp[n] 表示以第n个结尾的最长升序子序列的长度
int functions_dp[1005]; // functions_dp[n] 表示以第n个结尾的最长升序子序列的可选择方案数

// DP 题

int main()
{
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        int m;
        cin >> m;
        // cout << m << endl;
        for (int j = 1; j <= m; j++) {
            cin >> arr[j];
        }
        // 计算DP，dp[j]以i为结尾的最长升序子序列的长度
        for (int j = 1; j <= m; j++) {
            dp[j] = 1;
            for (int k = 1; k < j; k++) {
                if (arr[j] > arr[k]) {
                    dp[j] = max(dp[j], dp[k] + 1);
                }
            }
        }

        int max = 0,way;
        for (int j = 1; j <= m; j++) {
            if (dp[j] > max) {
                max = dp[j];
                way = functions_dp[j];
            }
            else if (dp[j] == max) {
                way += functions_dp[j];
            }
        }
        cout << max << " " << way << endl;//输出

        // 清除dp数组
        fill(dp, dp + m + 1, 0);
    }
    
    return 0;
}
