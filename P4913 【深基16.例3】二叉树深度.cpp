#include <iostream>

using namespace std;

struct
{
    int l, r;
} tree[1000005];

int ans;

void front_order(int x, int deep)
{
    if (!x)
        return;
    ans = max(ans, deep);
    front_order(tree[x].l, deep + 1);
    front_order(tree[x].r, deep + 1);
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> tree[i].l >> tree[i].r;
    }

    front_order(1, 1);
    cout << ans;

    return 0;
}
