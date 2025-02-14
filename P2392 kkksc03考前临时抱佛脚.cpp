#include <iostream>
#include <climits>

using namespace std;

int s[6], L, R, ans, m;
int a[6][50];

void dfs(int k, int y) {
	if (k > s[y]) {
		m = min(m, max(L, R));
		return ;
	}
	L += a[y][k];
	dfs(k + 1, y);
	L -= a[y][k];
	R += a[y][k];
	dfs(k + 1, y);
	R -= a[y][k];
}

int main() {
	cin >> s[1] >> s[2] >> s[3] >> s[4];
	
	for (int i = 1; i <= 4; i++) {
		L = R = 0;
		m = INT_MAX - 1;
		for(int j = 1; j <= s[i]; j++)
			cin >> a[i][j];
		dfs(1, i);
		ans+=m;
	}
	
	cout << ans;
	
	return 0;
}

