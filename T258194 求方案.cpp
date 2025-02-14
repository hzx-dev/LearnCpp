#include <iostream>

using namespace std;

int get_ans(int m, int n) {
	if (m == 0 || n == 1) return 1;
	if (m < n) return get_ans(m, m);
	return get_ans(m, n - 1) + get_ans(m - n, n);
}

int main() {
	
	int t;
	cin >> t;
	while (t--) {
		int m, n;
		cin >> m >> n;
		cout << get_ans(m, n) << endl;
	}
	
	return 0;
}

