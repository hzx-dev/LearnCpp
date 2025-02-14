#include <iostream>

using namespace std;

int n, k, cnt;

void dfs(int s, int f, int num) {
    if (s > k) {
        if (num == n) cnt++;
        return ;
    }

    for (int i = f; i <= n; i++) {
        if (num + i > n) return ;
        dfs(s + 1, i, num + i);
    }
}

int main()
{
    cin >> n >> k;

    dfs(1, 1, 0);

    cout << cnt;
    
    return 0;
}
