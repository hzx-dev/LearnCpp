#include <iostream>

using namespace std;

int T, M, t[1005], m[1005], dp[1005];

int main() {
    cin >> T >> M;

    for (int i = 1; i <= M; i++) {
        cin >> t[i] >> m[i];
    } 

    for (int i = 1; i <= M; i++) {
        for (int j = T; j >= t[i]; j--) {
            if (j - t[i] >= 0) {
                dp[j] = max(dp[j], dp[j - t[i]] + m[i]);
            }
        }
    }

    cout << dp[T];
    
    return 0;
}
