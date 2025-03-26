#include <iostream>

using namespace std;

int n;
int through[11451][11451], vis[11451], path[11451], ans_path[11451];
int a[11451];
int ans_sum = -0x7f7f7f7f, ans_count;

bool goto_next_is_imposable(int cur) {
    for (int i = 1; i <= n;i++) {
		if(through[cur][i] && !vis[i]) {
            // cout << cur << "has way" << endl;
            return false;
        }
    }
    return true;
}

void dfs(int cur, int step, int tot) {
    if (goto_next_is_imposable(cur)) {
        if (ans_sum < tot) {
            ans_sum = tot;
            ans_count = step;
            for (int i = 1; i <= step; i++)
                ans_path[i] = path[i];	
        }
    }

    for (int i = 1; i <= n; i++) {
        if (through[cur][i]) {
            // 可以走
            vis[i] = true;
            path[step + 1] = i;
            dfs(i, step + 1, tot + a[i]);
            vis[i] = false; // 还原现场
        }
    }
}

int main() {

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            cin >> through[i][j];
        }
    }

    // 其实数据很小，用 dfs 就好了，2^20 就 1,048,576 而已。
    for (int i = 1; i <= n; i++) {
        path[1] = i;
        dfs(i, 1, a[i]);
    }

    for (int i = 1; i <= ans_count; i++) {
        cout << ans_path[i] << ' ';
    }

    cout << endl << ans_sum << endl;

    return 0;
}
