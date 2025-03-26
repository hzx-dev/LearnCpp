#include <iostream>

using namespace std;

int n, m, a[205], dp[6005];

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        m += a[i];
    }

    dp[0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = m; j >= a[i]; j--) {
            if (dp[j - a[i]]) {
                dp[j] = true;
            }
        }
    }

    int ans = 0;

    for (int j = 1; j <= m; j++) {
        ans += dp[j];
    }

    cout << ans << endl;
    
    return 0;
}
