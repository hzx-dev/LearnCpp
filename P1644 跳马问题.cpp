#include <iostream>

using namespace std;

int n, m, ans;
int dx[4] = {1, 2, 2, 1}, dy[4]={2, 1, -1, -2};

void dfs(int x, int y) {
	if ( x < 0 || x > m || y > n || y < 0) return;
	if (x == m && y == n){
		ans++;
		return ;
	}
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if ( x >= 0 || x <= m || y <= n || y >= 0 ) {
			dfs(nx, ny);
		}
	}
}

int main() {
	cin >> n >> m;
	
	dfs(0, 0);
	
	cout << ans;
	
	return 0;
}

