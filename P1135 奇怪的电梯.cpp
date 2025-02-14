#include <iostream>
#include <queue>

using namespace std;

int f[5005], vis[5005], n, a, b;

struct s {
	int now, cost;
};

int bfs() {
	queue<s> q;
	q.push({a,0});
//	vis[a] = 1;
	while (!q.empty()) {
//		cout << "hdajfhjsdkaf" << endl;
		s now = q.front();
		q.pop();
		int cur = now.now, c = now.cost;
		if (cur == b) {
			return c;
		}
		if (vis[cur]) continue;
		vis[cur] = 1;
		// 考虑：上 or 下
		if (cur + f[cur] <= n && cur + f[cur] >= 1) {
//			cout << "UP" << endl;
			q.push({cur + f[cur], c + 1});
		}
		if (cur - f[cur] <= n && cur - f[cur] >= 1) {
			q.push({cur - f[cur], c + 1});
		}
	}
	return -1;
}

int main() {
	cin >> n >> a >> b;
	for (int i = 1; i <= n; i++) {
		cin >> f[i];
	}
	
	cout << bfs();
	
	return 0;
}

