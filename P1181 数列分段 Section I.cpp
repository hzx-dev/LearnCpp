#include <iostream>

using namespace std;

int n, m, sum, ans = 1;

int main() {
	cin >> n >> m;
	
	while (n--) {
		int tmp;
		cin >> tmp;
		if ((sum + tmp) > m) {
			ans++;
			sum = tmp;
		} else {
			sum += tmp;
		}
	}
	
	cout << ans;
	
	return 0;
}

