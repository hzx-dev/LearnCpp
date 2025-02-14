#include <iostream>

using namespace std;

int a[100];

void dfs(int n, int step) {
	if (step == n) {
		// 输出
		for (int i = 0; i < n; i++) {
			cout << (a[i] == 0 ? 'N' : 'Y');
		}
		cout << endl;
		return ;
	}
	
	for (int i = 0; i <= 1; i++) {
		a[step] = i;
		dfs(n, step + 1);
	}
}

int main() {
	int n;
	
	cin >> n;
	
	dfs(n, 0);
	
	return 0;
}
