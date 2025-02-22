#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n, x, y;
    cin >> n >> x >> y;
    int inner = abs(x - y); // 内环站点数。
    int outer = n - inner; // 外环

    // cout << inner << ' ' << outer << endl;

    bool reverse = ((x + inner) % n) != y;
    // cout << reverse << endl;

    // 判断逆时针还是顺时针。（判断到站点的顺序）
    if (inner == outer) {
        cout << "\"Wonderful\"" << endl;
    } else if (inner < outer) {
        if (reverse) cout << "Counter-clockwise Loop" << endl;
        else cout << "Clockwise Loop" << endl;
    } else {
        if (reverse) cout << "Clockwise Loop" << endl;
        else cout << "Counter-clockwise Loop" << endl;
    }

    return 0;
}
