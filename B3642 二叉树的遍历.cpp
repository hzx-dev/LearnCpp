#include <iostream>

using namespace std;

struct {
    int l, r;
} tree[1000005];

void front_order(int x) { if (!x) return ; cout << x << ' '; front_order(tree[x].l); front_order(tree[x].r);}
void in_order(int x) { if (!x) return ; in_order(tree[x].l); cout << x << ' '; in_order(tree[x].r);}
void post_order(int x) { if (!x) return ; post_order(tree[x].l); post_order(tree[x].r); cout << x << ' ';}

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> tree[i].l >> tree[i].r;
    }

    front_order(1); cout << endl;
    in_order(1); cout << endl;
    post_order(1); cout << endl;

    return 0;
}
