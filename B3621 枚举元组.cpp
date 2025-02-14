#include <iostream>

using namespace std;

int a[100];

void dfs(int n, int k, int step) {
	if (step == n) {
		// 输出
		for (int i = 0; i < n; i++) {
			cout << a[i] << ' ';
		}
		cout << endl;
		return ;
	}
	
	for (int i = 1; i <= k; i++) {
		a[step] = i;
		dfs(n, k, step + 1);
	}
}

int main() {
	int n, k;
	
	cin >> n >> k;
	
	dfs(n, k, 0);
	
	return 0;
}

