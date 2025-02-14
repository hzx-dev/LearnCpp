/**
 * @file:   B3631.cpp 
 * @author: _Kevin_Huang
 * @date:   2025-02-11 22:11:55
 **/

#include <iostream>

using namespace std;

struct Node{
	int l, r;
	bool deleted = false;
} s[100005];

void connect(int i, int k, int p) {
	if (p) {
		s[k].r = s[i].r;
		s[k].l = 1;
		s[i].r = k;
		s[s[k].r].l = k;
		cout << k << " right connected to " << i << endl;
	}
	else {
		s[k].r = i;
		s[k].l = s[i].l;
		s[i].l = k;
		s[s[k].l].r = k;
		cout << k << " left connected to " << i << endl;
	}
}

int main() {
	int n, k, p;
	cin >> n;
	s[0].r = 0, s[0].l = 0;
	connect(0,1,1);
	for (int i = 2; i <= n; i++) {
		cin >> k >> p;
		connect(k, i, p);
	}
	int now = s[0].r;
	int m;
	cin >> m;
	
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		s[x].deleted = true;
	}
	
	while (now) {
		if (!s[now].deleted) cout << now << ' ';
		now = s[now].r;
	}
	
	return 0;
}

// 
