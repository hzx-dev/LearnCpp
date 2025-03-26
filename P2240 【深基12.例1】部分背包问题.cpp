#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int N, T;
struct S {
    double m, v;
} s[105];

bool cmp(S a, S b) {
    return (a.v / a.m) > (b.v / b.m);
}

int main() {
    double ans = 0;
    cin >> N >> T;

    for (int i = 1; i <= N; i++) {
        cin >> s[i].m >> s[i].v;
    }

    sort(s + 1, s + N + 1, cmp);

    for (int i = 1; i <= N; i++) {
        // cout << s[i].m << ' ' << s[i].v << endl;
        if (T - s[i].m >= 0) {
            // 全都要！
            T -= s[i].m;
            ans += s[i].v;
        }
        else {
            ans += s[i].v * T / s[i].m;
            break;
        }
    }

    cout << fixed << setprecision(2) << ans;
    
    return 0;
}
