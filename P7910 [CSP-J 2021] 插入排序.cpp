#include <iostream>

using namespace std;

int a[100005];
int n, Q;

int main() {
    cin >> n >> Q;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }


    for (int i = 1; i <= Q; i++) {
        int t;
        cin >> t;
        if (t == 2) {
            int k;
            cin >> k;
            int cnt = 0;
            for (int j = 1; j < k; j++) if (a[j] <= a[k]) cnt++;
            for (int j = k + 1; j <= n; j++) if (a[j] < a[k]) cnt++;

            cout << cnt + 1 << endl;
            
        } else {
            int d,b;
            cin >> d >> b;
            a[d] = b;
        }
    }

    return 0;
}
