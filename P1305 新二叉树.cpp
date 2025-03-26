#include <iostream>
#include <map>

using namespace std;

struct s {char l, r;};

map<char, s> tree;

void front_order(char x) { if (x == '*') return ; cout << x; front_order(tree[x].l); front_order(tree[x].r);}

int main() {
    int n;
    cin >> n;
    char r;

    for (int i = 1; i <= n; i++) {
        char f;
        cin >> f;
        if (i == 1) r = f;
        cin >> tree[f].l >> tree[f].r;
    }

    front_order(r); cout << endl;
    return 0;
}
