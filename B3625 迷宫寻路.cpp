#include <bits/stdc++.h>
using namespace std;

int n, m;
char a[105][105];
bool vis[105][105];

void bfs() {
	queue<pair<int, int>> q;
	
	q.push({1, 1});
	
	while(!q.empty()) {
		auto now = q.front();
		q.pop();
		
		int x = now.first, y = now.second;
		
		if(x < 1 || x > n) continue;
		if(y < 1 || y > m) continue;
		if(a[x][y] == '#') continue;
		
		if(vis[x][y]) continue;
		vis[x][y] = 1;
		
		
		if(x == n && y == m) {cout << "Yes" << endl; return;}
		
		q.push({x + 1, y});
		q.push({x - 1, y});
		q.push({x, y + 1});
		q.push({x, y - 1});
	}
	cout << "No" << endl;
}

int main() {
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
			cin >> a[i][j];
	
	bfs();
	
	return 0;
}
