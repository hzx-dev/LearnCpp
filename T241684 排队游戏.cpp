#include <iostream>
#include <list>

// T241684 排队游戏

using namespace std;

list<int> l;

int main() {
	
	int n, m, cur = 0;
	
	cin >> n >> m;
	
	for (int i = 1; i <= n; i++) {
		l.push_back(i);
	}
	
	while (!l.empty()) {
		cur++;
		if (cur == m) {
		}
	}
	
	return 0;
}

