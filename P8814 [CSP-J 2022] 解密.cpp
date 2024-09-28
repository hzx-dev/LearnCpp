#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

void get_answer(long long n, long long e, long long d) {
    long long m = max(n, max(e, d));
    for (long long q = 0; q < m; q++) {
        for (long long p = 0; p <= q; p++) {
            if (n == p * q) {
                cout << p << ' ' << q << endl;
                return ;
            }
        }
    }
    cout << "NO" << endl;
    return ;
}

int main() {

    ios::sync_with_stdio(false);

    int k;
    cin >> k;

    long long n, e, d;

    while (k--) {
        cin >> n >> e >> d;

        // 尝试暴力枚举
        get_answer(n, e, d);
    }

    return 0;
}
