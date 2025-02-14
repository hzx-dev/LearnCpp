#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int n, h[305];

int main() {
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		cin >> h[i];
	}
	
	sort(h + 1, h + n + 1);
	
	long long ans = 0, l = 0, r = n;
	// MostHigh -> MostNotHight -> 2ndHigh -> 2nd short...
	while (r > l) {
		ans += pow(h[r] - h[l], 2);
		l++;
		ans += pow(h[l] - h[r], 2);
		r--;
	}
	
	cout << ans;
	
	return 0;
}

