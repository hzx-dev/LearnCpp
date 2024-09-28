#include <iostream>

using namespace std;

long long dp[100005];
long long price[100005];

// 此题可以使用DFS解决。

// ...... 吗? AC不了...
// 要用DP来做才行。
// 经过我漫长的一分钟思考，我AC了

// 一个测试数据。。。
// WA 0...
// C，输入写反了。。。

int main()
{
    int m, n;
    // cin >> m >> n;
    cin >> n >> m;
    
    dp[0] = 1;
    
    for (int i = 1; i <= n; i++) {
        cin >> price[i];
    }

    for (int i = 1; i <= n; i++) {
        for (int j = m; j >= price[i]; j--) {
            dp[j] = dp[j] + dp[j - price[i]];
        }
    }

    cout << dp[m];

    return 0;
}
