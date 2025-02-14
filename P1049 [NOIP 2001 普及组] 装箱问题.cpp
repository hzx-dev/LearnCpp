#include <iostream>

using namespace std;

int V, n, f[20005], vis[20005], ans;

void dfs(int cur, int tot) {
	if (cur > n || tot > V) {
		if (tot <= V) ans = max(ans, tot);
		return ;
	}
	dfs(cur + 1, tot + f[cur + 1]);
	dfs(cur + 1, tot);
}

int main() {
	
	cin >> V >> n;
	
	for (int i = 1; i <= n; i++) {
		cin >> f[i];
	}
	
	dfs(0, 0);
	cout << V - ans;
	
	return 0;
}

