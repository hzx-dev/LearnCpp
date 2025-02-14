#include <cstdio>
#include <algorithm>
#include <iostream>

using namespace std;

int n, m, a[1000005];

int cmp(int a, int b) {
	return a > b;
}

int find(int k) {
	// 查找k
	int l = 1, r = n, ans = -1;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (a[mid] == k) {
			ans = mid;
			r = mid - 1;
		} else if (a[mid] > k) {
			l = mid + 1;	
		} else {
			r = mid - 1;
		}
	}
	return ans;
}

int main() {
	scanf("%d %d", &n, &m);
	
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	
	sort(a + 1, a + n + 1, cmp);
//	for (int i = 1; i <= n; i++) {
//		printf("%d", a[i]);
//	}
	int tmp = 0;
	for (int i = 1; i <= m; i++) {
		scanf("%d", &tmp);
		int result = find(tmp);
		printf("%d\n", result);
	}
	
	return 0;
}
