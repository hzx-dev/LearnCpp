#include <cstdio>
#include <map>
#include <cstring>

using namespace std;

int w[15];
int n, ans, tot, stot;

void dfs(int step, int first, int second, int third) { // f1~3 每一个天平的状态
    if (ans) return ;
    if (step == n + 1) {
        if (first == second && second == third && first == third) {
            ans = 1;
            return;
        }
        return;
    }
    dfs(step + 1, first + w[step], second, third);
    dfs(step + 1, first, second + w[step], third);
    dfs(step + 1, first, second, third + w[step]);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        tot = 0;
        for (int i = 1; i <= n; i++) {
            scanf("%d", &w[i]);
            tot += w[i];
        }
        ans = 0;
        if (tot % 3 != 0) printf("No\n"); // 奇偶性剪枝(但是是判断3的倍数)
        else {
            dfs(1, 0, 0, 0);
            if (ans) printf("Yes\n");
            else printf("No\n");
        }
    }
}
