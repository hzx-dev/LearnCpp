#include <iostream>
#include <map>

using namespace std;

char mp[10005][10005];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
map<pair<int, int>, int> road;

void get_ans() {    
    road.clear();
    int n, m, k;
    cin >> n >> m >> k;
    int x, y, d;
    cin >> x >> y >> d;
    int sx = x, sy = y;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mp[i][j];
        }
    }
    
    for (int i = 0; i < k; i++) {
        int nx = dx[d] + x;
        int ny = dy[d] + y;
        
        if ((nx >= 1 && nx <= n) &&
            (ny >= 1 && ny <= m) &&
            (mp[nx][ny] == '.')) {
            road[{nx, ny}]++;
            x = nx;
            y = ny;
        } else {
            d = (d + 1) % 4;
        }
    }
    
    if (road.count({sx, sy})) {
        cout << road.size() << endl;
    } else
        cout << road.size() + 1 << endl;
    
    return ;
}

int main() {
    
    int t;
    cin >> t;
    // freopen("explore5.in", "r", stdin);
    while (t--) {
        get_ans();
    }
    
    return 0;    
}

