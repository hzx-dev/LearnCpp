#include <iostream>
#include <map>

using namespace std;

int p[1005], s[1005];

//struct {
//	int pr, sr, sc;
//} record[100005];

map<int, pair<int, int>> t; // t[i].first 表示i号同学使用传统方式的时间
// second 表示使用洛谷的时间
map<int, map<int, int>> scr; // 表示i号同学i号题目的最高分数
map<int, map<int, bool>> is_loaded; // 表示i号同学是否已经加载i号题目

int main() {
	
	int n, m, r, tmp;
	int luogu = 0, raw = 0;
	int ta, tb, tc, td, a, h, e;
	
	cin >> n >> m;
	
	for (int i = 1; i <= n; i++) {
		cin >> tmp;
	}
	
	for (int i = 1; i <= m; i++) {
		cin >> tmp;
	}
//	int loadcnt = 0;
	cin >> ta >> tb >> tc >> td >> a >> h >> e;
	
	cin >> r;
	
	for (int i = 1; i <= r; i++) {
		int pr, sr, sc; // 该次评测的题目号、学号以及成绩
		cin >> pr >> sr >> sc;
//		record[i] = {pr, sr, sc};
		// 计算时间
		t[sr].first += tb; // 教师机
		if (is_loaded[sr][pr] == false) { // 在自己电脑上未装载题目
			// 加载题目
			t[sr].second += ta;
			is_loaded[sr][pr] = true; // 标记已经加载好
//			loadcnt++;
		}
		t[sr].second += tc; // 加上时间 tc;
//		cout << scr[sr][pr] << endl;
		if (e && sc > scr[sr][pr]) {
			t[sr].first += td;
			t[sr].second += td;
			scr[sr][pr] = sc;
		} // 更新记录
	}
//	cout << loadcnt << endl;
	for (auto item : t) {
		if (item.second.first <= item.second.second) {
			raw += item.second.first;
		} else {
			raw += item.second.second;
		}
	}
	
	raw += ta * n;    // 两者都需要 
	luogu += ta * n;  // 配置题目
	luogu += r * tc;  // 测评用时
	luogu = luogu * 100 / a; // 稳定性时间
	luogu += h;       // 额外的罚时
	
	cout << raw << endl << luogu << endl;
	
	if (luogu < raw) {
		cout << "Use Luogu!";
	} else cout << "Forget it...";
	
	return 0;
}

