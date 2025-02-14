#include <iostream>

using namespace std;

int a, n, m, d[50005];

bool check(int x) {
	int last = 0, ans = 0;
	for (int i = 1; i <= n; i++) {
		if (d[i] - last < x) ans++;
		else last = d[i];
	}
	return ans <= m;
}

int main() {
	
	cin >> a >> n >> m;
	
	for (int i = 1; i <= n; i++) cin >> d[i];
	
	d[++n] = a;
	
	int l = 1, r = a, mid, ans;
	
	while (l <= r){
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
