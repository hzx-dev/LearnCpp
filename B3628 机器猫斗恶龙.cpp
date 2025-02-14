#include <iostream>

using namespace std;

int n, a[100001], ans = 0x7f7f7f7f;

bool check(int x) {
	int hp = x;
//	cout << "Checking" << x << endl;
	for (int i = 1; i <= n; i++) {
		hp += a[i];
		if (hp <= 0) return false;
	}
//	cout << x << "is good" << endl;
	return true;
};

int main() {
	
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	
	long long l = 1, r = 100000 * 1000 + 1, mid;
	
	while (l <= r) {
		mid = (l + r) / 2;
//		cout << "l, r is" << l << " " << r << endl;
		if (check(mid)) {
			ans = min(mid, (long long)ans);
			r = mid - 1;
		} else {
			l = mid + 1;
		}
	}
	
	cout << ans;
	
	return 0;
}
