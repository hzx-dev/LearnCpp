#include <iostream>

using namespace std;

int qzh[1000005]; // 前缀和数组。
int a[1000005];

int main()
{
    int n, k; // 不多于k次操作。

    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        int c;
        cin >> c;
        qzh[i] = qzh[i - 1] + c;
    }
    
    int mx = 0;

    for (int i = 1; i <= n - k; i++) {
        mx = max(mx, qzh[i + k] - qzh[i - 1]); // 枚举区间长度，取最大值。
    }
    
    cout << mx << endl;

    return 0;
}
