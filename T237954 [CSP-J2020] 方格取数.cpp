#include <iostream>

using namespace std;

int a[1005][1005], vis[1005][1005], n, m, ans = -114514;

void dfs(int x,int y,int sum) {
	if (x == n && y == m) {ans = max(ans, sum);return;}
	else {if(!vis[x + 1][y] && x <= n) {vis[x + 1][y] = 1;dfs(x + 1, y, sum+a[x+1][y]);vis[x + 1][y] = 0;}
		  if(!vis[x - 1][y] && x >  1) {vis[x - 1][y] = 1;dfs(x - 1, y, sum+a[x-1][y]);vis[x - 1][y] = 0;}
		  if(!vis[x][y + 1] && y <= m) {vis[x][y + 1] = 1;dfs(x, y + 1, sum+a[x][y+1]);vis[x][y + 1] = 0;}
	}
}
		
int main() {
	cin >> n >> m;
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
	
	vis[1][1] = 1;
	dfs(1, 1, a[1][1]);
	cout << ans;
	
	return 0;
}

