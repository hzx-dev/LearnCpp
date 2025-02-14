#include <iostream>

using namespace std;

int a[100], vis[100];

void dfs(int n, int k, int step) {
	if (step == k) {
		for (int i = 0; i < k; i++) {
			cout << a[i] << ' ';
		}
		cout << endl;
		return ;
	}
	
	for (int i = 1; i <= n; i++) {
		if (vis[i] == 0) {
			vis[i] = 1;
			a[step] = i;
			dfs(n , k, step + 1);
			vis[i] = 0;
		}
	}
}

int main() {
	int n, k;
	
	cin >> n >> k;
	
	dfs(n, k, 0);
	
	return 0;
}

