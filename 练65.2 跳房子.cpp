#include <iostream>
#include <set>

using namespace std;

int map[5][5];
set<int> nums;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

void dfs(int x, int y, int step, int num) {
    num = num * 10 + map[x][y];
    if (step == 6) {
        nums.insert(num);
        return;
    }
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && nx < 5 && ny >= 0 && ny < 5) {
            dfs(nx, ny, step + 1, num);
        }
    }
}

int main()
{
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> map[i][j];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            dfs(i, j, 1, 0);
        }
    }

    cout << nums.size() << endl;
    
    return 0;
}
