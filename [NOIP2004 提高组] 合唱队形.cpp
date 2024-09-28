#include <iostream>
#include <vector>

using namespace std;

vector<int> a;
int dp[100005];
int dp_2[100005];
int total[100005];

int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    
    // 从右往左，按左高右低顺序找出每一个位置右边有几个从高到低的数

    for (int i = n - 1; i >= 0; i--) {
        dp[i] = 1;
        for (int j = i + 1; j <= n; j++) {
            if(a[i] > a[j] && dp[i] < dp[j] + 1)
            {
                dp[i] = dp[j] + 1;
            }
        }
    }

    // 从左往右，按左低右高顺序找出每一个位置左边有几个从低到高的数

    for (int i = 0; i < n; i++) {
        dp_2[i] = 1;
        for (int j = 0; j < i; j++) {
            if (dp_2[i] <= dp_2[j] + 1 && a[j] < a[i]) {
                dp_2[i] = dp_2[j] + 1;
            }
        }
    }

    // 接着就可以把自己左边的从低到高的数和右边从高到低的数相加
    
    int ans = 0;

    for (int i = 0; i < n; i++) {
        total[i] = dp[i] + dp_2[i] - 1;
        if (total[i] > ans) {
            ans = total[i];
        }
    }

    cout << n - ans << endl;

    return 0;
}
