#include <iostream>

using namespace std;

int k[5005];
int n, m;

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }
    int cur = 0;
    for (int i = 1; i <= m; i++) {
        if (cur - k[cur] <= 0) {
            do {
                cur = (n - abs(k[cur] - cur)) % n;
            } while (cur < 0);
        } else {
            cur = (abs(cur - k[cur])) % n;
        }
        // cout << cur << endl;
    }

    cout << cur + 1 << endl;
    
    return 0;
}
