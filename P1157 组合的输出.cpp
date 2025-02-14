#include <iostream>
#include <iomanip>

using namespace std;

int a[100], vis[100];

void dfs(int n, int r, int s) {
	if (s == r) {
		for (int i = 0; i < r; i++) {
			cout << setw(3) << a[i];
		}
		cout << endl;
		return ;
	}
	
	for (int i = a[s - 1] + 1; i <= n; i++) {
//		if (!vis[i]) {
		a[s] = i;
//			vis[i] = 1;
		dfs(n, r, s + 1);
//			vis[i] = 0;
//		}
	}
}

int main() {
	int n, r;
	
	cin >> n >> r;
	
	dfs(n, r, 0);
	
	return 0;
}

