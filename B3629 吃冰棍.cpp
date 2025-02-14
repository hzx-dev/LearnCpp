#include <iostream>

using namespace std;

int n;

int calc(int x) {
	int total = x;
	
	while (x > 3) {
		total += 1;
		x -= 2;
	}
	
	return total;
}

int main() {
	cin >> n;
	
	int l = 1, r = 100000000, ans = 0x7f7f7f7f, mid;
	
	while (l <= r) {
		mid = (l + r) / 2;
		if (calc(mid) > n) {// 如果买MID个可以吃到的的预期想吃到的多
			r = mid - 1; // 排除1/2
			ans = min(ans, mid); // 更新答案
		} else l = mid + 1;
	}
	cout << ans - 1;
	return 0;
}
