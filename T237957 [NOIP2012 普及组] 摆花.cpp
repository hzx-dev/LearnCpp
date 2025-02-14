#include <iostream>

using namespace std;

int n, m, a[1145], cnt[1145], ans;
const int mod = 10e6 + 7;

int dfs(int x,int k) // 选择到x
{
	if (k > m) {
		return 0;
	}
	if (k == m) {
		return 1;
	}
	if (x == n + 1) {
		return 0;
	}
	int ans = 0;
	for(int i = 0; i <= a[x]; i++) {
		ans += dfs(x + 1, k + i) % mod;
	}
	return ans;
}

int main() {
	
	cin >> n >> m;
	
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	
	cout << dfs(1, 0);;
	
	return 0;
}

