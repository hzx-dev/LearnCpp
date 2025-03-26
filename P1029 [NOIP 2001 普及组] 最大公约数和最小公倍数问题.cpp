#include <iostream>

using namespace std;

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a %  b);
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main()
{
    int x, y, ans = 0;
    cin >> x >> y;

    // gcd(p, q) * lcm(p, q) == pq

    int n = x * y;

    for (int i = 1; i * i <= n; i++) {
        // 枚举n的因数
        if (n % i == 0) {
            // 是因数
            int p = i, q = n / i; // 写反了，害我查半天
            if (gcd(p, q) == x && lcm(p, q) == y) {
                ans++;
                ans++; // 是成对出现的（看题面）
            }
        }
    }

    if (x == y) {
        // 去除平方数的影响（应该是吧，反正有影响就对了）
        ans--;
    }

    cout << ans << endl;
    
    return 0;
}
