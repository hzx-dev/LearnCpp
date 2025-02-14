#include <iostream>

using namespace std;

int t[1005], v[1005], T, M, ans = -11451419;

void dfs(int k, int ts, int vs) {
	// 选到k，使用时间ts，价值vs;
	if (k > M) {
		ans = max(ans, vs);
		return ;
	}
	
	if (t[k] + ts <= T) /* 没有超时 */  dfs(k + 1, t[k] + ts, v[k] + vs);
	dfs(k + 1, ts, vs); /* 不  选  */
}

int main() {
	
	cin >> T >> M;
	
	for (int i = 1; i <= M; i++) {
		cin >> t[i] >> v[i];
	}
	
	dfs(1, 0, 0);
	
	cout << ans;
	
	return 0;
}

