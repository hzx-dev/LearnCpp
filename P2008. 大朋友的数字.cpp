#include <iostream>

using namespace std;

int arr[1000001];
int dp[1000001]; // dp[i]表示i前的最长不下降子序列的长度。
long long ans[1000001]; // ans[i]表示以i为结尾的最长不下降子序列的所有元素之和。

int main()
{
    int n;
    
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];

        ans[i] = arr[i];

        for (int j = 1; j < i; j++) {
            if (arr[i] >= arr[j] and dp[i] < dp[j] + 1) { //满足最小字典序和最长不下降子序列时
                dp[i] = dp[j] + 1;
                ans[i] = ans[j] + arr[i];
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
