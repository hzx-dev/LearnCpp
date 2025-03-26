#include <iostream>

using namespace std;

int n, M, T;
int m[10005], t[10005];
int dp[10005][10005];

int main() {
    cin >> n >> M >> T;

    for (int i = 1; i <= n; i++) {
        cin >> m[i] >> t[i];
        for (int j = M; j >= m[i]; j--) {
            for (int k = T; k >= t[i]; k--) {
                dp[j][k] = max(dp[j][k], dp[j - m[i]][k - t[i]] + 1); // 完成 or no
            }
        }
    }

    cout << dp[M][T];
    
    return 0;
}
