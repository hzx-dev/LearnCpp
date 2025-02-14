#include <cstdio>
#include <algorithm>

using namespace std;

int n, m, a[1000005];

int binary_search_first(int k) {
	// 查找k
	int l = 1, r = n, ans = -1;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (a[mid] == k) {
			// Yahooooooooooo! Found it
			// ...... Really? Maybe not first!
			// So we have to continue
			// 我应该没有拼错吧？
			ans = mid;
			r = mid - 1;
		} else if (a[mid] > k) {
			r = mid - 1;
		} else {
			l = mid + 1;
		}
	}
	return ans;
}

int main() {
	scanf("%d %d", &n, &m);
	
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	int tmp = 0;
	for (int i = 1; i <= m; i++) {
		scanf("%d", &tmp);
		printf("%d ", binary_search_first(tmp));
	}
	
	return 0;
}

