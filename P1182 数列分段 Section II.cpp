#include <iostream>

using namespace std;

int l, r, n, m, a[100005], ans, mid;

int check(int x) {
	// 计算有多少段
	int tot = 0, sum = 0;
	for(int i = 1; i <= n; i++)
	{
		if(tot + a[i] <= x) tot += a[i];
		else {
			tot = a[i];
			sum ++;
		}
	}
	return sum >= m;
}

int main() {
	
	cin >> n >> m;
	
	// 二分每段最大值的和
	
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		l = max(l, a[i]);
		r += a[i];
	}
	
	while (l <= r) {
		mid = (l + r) / 2;
		if (check(mid)) {
			l = mid + 1;
		} else {
			r = mid - 1;
		}
	}
	
	cout << l;
	
	return 0;
}
