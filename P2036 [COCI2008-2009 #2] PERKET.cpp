#include <iostream>
#include <climits>

using namespace std;

int s[100], b[100], n, ans = INT_MAX - 1;

void dfs(int i, int x, int y, int n) {
//	cout << n << endl;
	if (i > n) {
//		cout << "lalalalla" << endl;
//		cout << x << ' ' << y;
		if (x == 1 && y == 0) return;
		ans = min(abs(x - y), ans);
		return ;
	}
	// 加 or 不加
	dfs(i + 1, x * s[i], y + b[i], n);
	dfs(i + 1, x, y, n);
}

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> s[i] >> b[i];
	}
//		cout << n;
	dfs(1, 1, 0, n);
	
	cout << ans;
	
	return 0;
}

