#include <iostream>

using namespace std;

int x, y, k, ans1, ans2;

int main() {
    cin >> x >> y >> k;

    for (int b = 0; b <= x; b++) {
        for (int p = 1; p <= y; p++) {
            if (b == p) continue;
            for (int z = 0; z <= k; z++) {
                ans1 = max(ans1, ((b + p) ^ z));
                // cout << b << ' ' << p << ' ' <<z<<' ' << ans1 << "Updated \n";
            }
        }
    }

    cout << ans1 << endl;

    for (int b = 0; b <= x; b++) {
        for (int p = 1; p <= y; p++) {
            for (int z = 0; z <= k; z++) {
                if (((b + p) ^ z) == ans1) {
                    ans2++;
                    // cout << b << ' ' << p << ' ' << z << endl;
                }
            }
        }
    }

    cout << ans2;

    return 0;
}
