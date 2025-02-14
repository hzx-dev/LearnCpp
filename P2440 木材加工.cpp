#include <iostream>
#include <algorithm>

using namespace std;

int n, k, l = 0, r = 100000001, mid, ans = -1, L[100005], result;

bool calc(int x) {
	long long ans = 0;
	for (int i = 1; i <= n; i++) {
		ans += L[i] / x;
	}
	return ans >= k;
}

int main() {
	
	cin >> n >> k;
	
	for (int i = 1; i <= n; i++) {
		cin >> L[i];
	}
	
	while (l + 1 < r) {
		mid = (l + r) / 2;
		if (calc(mid)) l = mid;
		else r = mid;
	}
	
	cout << l << endl;
	
	return 0;
}
