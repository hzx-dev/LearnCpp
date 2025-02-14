#include <iostream>
#include <algorithm>

using namespace std;

pair<int, int> m[1000005];
int n, ans;

bool cmp(pair<int, int> a, pair<int, int> b) {
	return a.second < b.second;
}

void get_ans() {
	int last_attend = 1;
	for (int i = 1; i <= n; i++) {
		if (i == 1) ans++;
		else {
//			cout << m[i].first << ' ' << m[i - 1].second << ' ' << (m[i].first >= m[i - 1].second) << endl;
			if (m[i].first >= m[last_attend].second) {
				ans++; // 时间可用
				last_attend = i;
			}
		}
	}
}

int main() {
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		cin >> m[i].first >> m[i].second;
	}
	
	sort(m + 1, m + n + 1, cmp);
	
//	for (int i = 1; i <= n; i++) {
//		cout << m[i].first << m[i].second;
//	}
	
	get_ans();
	
	cout << ans;
	
	return 0;
}
