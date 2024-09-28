#include <iostream>
#include <string>
#include <vector>
using namespace std;

int getLongestCommonSubstringLength(vector<string>& strings) {
    int n = strings.size();
    if (n == 0) return 0;

    vector<vector<int>> dp(n, vector<int>(strings[0].size(), 0));
    int maxLength = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < strings[0].size(); ++j) {
            if (strings[i][j] == strings[0][j]) {
                dp[i][j] = (i > 0? dp[i - 1][j] : 0) + 1;
                maxLength = max(maxLength, dp[i][j]);
            }
        }
    }

    return maxLength;
}

int main() {
    int n;
    cin >> n;
    vector<string> strings(n);
    for (int i = 0; i < n; ++i) {
        cin >> strings[i];
    }

    int result = getLongestCommonSubstringLength(strings);
    cout << result << endl;

    return 0;
}
