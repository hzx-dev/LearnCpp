#include <iostream>

using namespace std;

long long n, x, a[100005], ans, needeat, sum;

int main() {
	
	cin >> n >> x;
	
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	
	for (int i = 1; i < n; i++) {
		sum = a[i] + a[i + 1];
		if (sum > x) {
			needeat = sum - x;
			ans += needeat;
			if (a[i + 1] < needeat) {
				needeat -= a[i + 1];
				a[i + 1] = 0;
				a[i] -= needeat;
			} else {
				a[i + 1] -=  needeat;
			}
		}
	}
	
	cout << ans;
	
	return 0;
}
