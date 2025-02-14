#include <iostream>

using namespace std;

int n, ans;
int a[15], b[15], c[99], d[99];

void checker_challenge(int row) {
	if (row == n + 1) {
		if (ans < 3) {
			for (int i = 1; i <= n; i++) {
				cout << a[i] << ' ';
			}
			cout << endl;
		}
		ans++;
	}
	
	for (int i = 1; i <= n; i++) {
		if (!b[i] && !c[row + i]  && !d[row - i + n]) {
			a[row] = i;
			b[i] = 1;
			c[row + i] = 1;
			d[row - i + n] = 1;
			checker_challenge(row + 1);
			b[i] = 0;
			c[row + i] = 0;
			d[row - i + n] = 0;
		}
	}
}

int main() {
	cin >> n;
	
	checker_challenge(1);
	
	cout << ans;
	
	return 0;
}

