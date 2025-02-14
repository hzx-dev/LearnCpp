#include <iostream>
#include <queue>

using namespace std;

char a[1005][1005];
int n, m, ans, vis[1005][1005];

void bfs(int i, int j) {
	queue<pair<int, int>> q;
	
	q.push({i, j});
	
	while(!q.empty()) {
		auto now = q.front();
		q.pop();
		
		int x = now.first, y = now.second;
		
		if(x < 1 || x > n) continue;
		if(y < 1 || y > m) continue;
		if(a[x][y] == '0') continue;
		a[x][y] = '0';
		
//		if(vis[x][y]) continue;
//		vis[x][y] = 1;
		
		
//		if(x == n && y == m) {cout << "Yes" << endl; return;}
		
		q.push({x + 1, y});
		q.push({x - 1, y});
		q.push({x, y + 1});
		q.push({x, y - 1});
	}
//	cout << "No" << endl;
}

int main() {
	
	cin >> n >> m;
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i][j] != '0') {
				ans++;
				bfs(i, j);
			}
		}
	}
	cout << ans;
	return 0;
}

