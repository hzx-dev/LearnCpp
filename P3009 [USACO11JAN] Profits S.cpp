#include <iostream>

using namespace std;

int n, ans = -0x7f7f7f7f;
int a[100005], f[100005]; // f[i]表示前i个数的最大子段和。

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++) {
        f[i] = max(a[i], a[i] + f[i - 1]); // 自己新的，or this
        ans = max(f[i], ans);
    }

    cout << ans << endl;
    
    return 0;
}
