#include <iostream>
#include <algorithm>

using namespace std;

int a[100005];

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    sort(a + 1, a + n + 1);

    int l = 1;

    for (int i = 1; i <= n; i++) {
        if (a[l] >= a[i]) continue;
        l++;
    }

    cout << n - l + 1;

    return 0;
}
