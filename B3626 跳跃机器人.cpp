#include <bits/stdc++.h>
using namespace std;
struct Pos {
	int x, cost;
	Pos(int ax = 0, int acost = 0) {
		x = ax, cost = acost;
	}
};
int n;
bool vis[1000005];
void bfs() {
	queue <Pos> q;
	q.push(Pos(1, 0));
	while(!q.empty()) {
		Pos now = q.front();
		q.pop();
		int x = now.x, cost = now.cost;
		if(x < 1 || x > n)
			continue;           
		if(vis[x])
			continue; 
		vis[x] = 1;
		
		if(x == n) {
			cout << cost << endl;
			return;
		}
		q.push(Pos(x - 1, cost + 1));
		q.push(Pos(x + 1, cost + 1));
		q.push(Pos(x * 2, cost + 1));
	}
}
int main() {
	cin >> n;
	bfs();
	return 0;
}

