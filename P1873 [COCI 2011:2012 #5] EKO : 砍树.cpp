#include <iostream>

using namespace std;

long long n, m, h[1000005];

bool check(int x) {
	// 一个高度，求砍伐到的树木的高度
	long long tot = 0;
	for (int i = 1; i <= n; i++) {
		if (h[i] < x) continue;
		tot += h[i] - x;
	}
	return tot >= m;
}

int main() {
	
	cin >> n >> m;
	
	for (int i = 1; i <= n; i++) {
		cin >> h[i];
	}
	
	long long l = 1, r = 400001, mid, ans;
	
	while (l <= r) {
		mid = (l + r) / 2;
		if (check(mid)) {
			l = mid + 1;
			ans = mid;
		}
		else r = mid - 1;
	}
	
	cout << ans;
	
	return 0;
}
