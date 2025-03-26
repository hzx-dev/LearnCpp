#include <iostream>
#include <map>
#include <vector>

using namespace std;

map<int, map<int, int> > a;
map<int, int> cnt;

int main() {
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		int t, k;
		cin >> t >> k;
//		cout << t << k << endl;
		for (int i = 1; i <= k; i++) {
			int tmp;
			cin >> tmp;
			a[t][tmp] ++;
		}
		// 计算
		cnt.clear();
		for (auto item : a) {
			// 是否在24小时内
			
			if ((t - 86400 < item.first) && (item.first <= t)){
				for (auto it : item.second) {
					cnt[it.first] = 1;
//					cout << it.first <<' ' <<it.second << endl;
				}
			}
		}
//		cout << endl;
//		for (auto it : cnt) {
//			cout << it.first << ' ' << it.second << endl;
//		}
		cout << cnt.size() << endl;
	}

	return 0;
}
