#include <iostream>

using namespace std;

long long T, M, t[10005], m[10005], dp[10000005];

int main() {
    cin >> T >> M;

    for (int i = 1; i <= M; i++) {
        cin >> t[i] >> m[i];
    } 

    for (int i = 1; i <= M; i++) {
        for (int j = t[i]; j <= T; j++) {
            dp[j] = max(dp[j], dp[j - t[i]] + m[i]);
        }
    }

    cout << dp[T];
    
    return 0;
}
