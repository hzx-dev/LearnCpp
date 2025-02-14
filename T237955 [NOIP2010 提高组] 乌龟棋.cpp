#include <iostream>

using namespace std;

int n, m, a[355], b[125], vis[114514], ans;

void dfs(int sc, int k, int cur) {
//	cout << cur << endl;
	if (cur == n) {
//		s[k][cur] = sc;
		ans = max(ans, sc);
		return;
	}
	for (int i = 1; i <= m; i++) {
		if (!vis[i]) {
			vis[i] = 1;
			dfs(sc + a[cur + b[i]], k + 1, cur + b[i]);
			vis[i] = 0;
		}
	}
}

int main() {
	
	cin >> n >> m;
	
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= m; i++) cin >> b[i];

	dfs(a[1], 0, 1);
	
	cout << ans;
	
	return 0;
}

