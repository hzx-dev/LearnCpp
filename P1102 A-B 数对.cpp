#include <iostream>
#include <algorithm>

using namespace std;

int n, c, a[200010]; long long ans = 0; // 忘记开longlong了

int find_first_k(int k) {
	// 使用二分查找查找第一个k
	int l = 1, r = n, ans = -1;
	while (l <= r) {
		// 计算中间值
		int mid = (l + r) / 2;
		if (a[mid] == k) {
			// 查找到了
			ans = mid; // 先记录答案
			// 但是不着急退出，要找到第一个
			r = mid - 1;
		} else if (a[mid] > k) {
			r = mid - 1;
		} else {
			l = mid + 1;
		}
	}
	return ans;
}

int find_last_k(int k) {
	// 使用二分查找查找第last个k
	int l = 1, r = n, ans = -1;
	while (l <= r) {
		// 计算中间值
		int mid = (l + r) / 2;
		if (a[mid] == k) {
			// 查找到了
			ans = mid; // 先记录答案
			// 但是不着急退出，要找到第last个
			l = mid + 1;
		} else if (a[mid] > k) {
			r = mid - 1;
		} else {
			l = mid + 1;
		}
	}
	return ans;
}

int main() {
	cin >> n >> c;
	
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	
	// c, 忘记sort了。
	sort(a + 1, a + n + 1);
	
	for (int i = 1; i <= n; i++) {
		int f = find_first_k(a[i] + c);
		int l = find_last_k(a[i] + c);
		if (f == -1) continue;
		ans += l - f + 1;
	}
	
	cout << ans;
	
	return 0;
}

