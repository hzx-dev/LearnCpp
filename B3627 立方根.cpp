#include <iostream>
#include <cmath>

using namespace std;

long long n;

bool check(int x) {
	return ((long long) x * x * x) <= n;
}

int main() {

    cin >> n;
    
    long long ans = -1, l = 1, r = 100001;
	
	while (l <= r) {
		long long mid = (l + r) / 2;
		if (check(mid)) {
			ans = max(ans, mid);
			l = mid + 1;
		} else {
			r = mid - 1;
		}
	}
	
	cout << ans;
    
    return 0;
}

