#include <iostream>
#include <algorithm>

using namespace std;

long long n, k;
long long d[114514];

int main() {

    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        cin >> d[i];
        // r = max(r, d[i]);
        // l = min(l, d[i]);
    }

    // sort(d+1, d+n+1);
    nth_element(d+1, d+k-1, d+n+1);

    for (int i = 1; i <= n; i++) {
        cout << d[i];
    }

    return 0;
}
