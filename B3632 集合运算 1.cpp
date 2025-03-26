#include <iostream>

using namespace std;

int a[65], b[65];
int x, y, tmp;

int main() {
    cin >> x;
    for (int i = 1; i <= x; i++) {
        cin >> tmp;
        a[tmp] = 1;
    }

    cin >> y;
    for (int i = 1; i <= y; i++) {
        cin >> tmp;
        b[tmp] = 1;
    }

    cout << x << endl;

    for (int i = 0; i <= 63; i++) {
        if (a[i] == 1&& b[i] == 1) {
            cout << i << ' ';
        }
    }
    cout << endl;

    for (int i = 0; i <= 63; i++) {
        if (a[i] == 1 || b[i] == 1) {
            cout << i << ' ';
        }
    }
    cout << endl;

    for (int i = 0; i <= 63; i++) {
        if (a[i] != 1) cout << i << ' ';
    }

    cout << endl;
    bool fl = 1;
    for (int i = 0; i <= 63; i++) {
        if (!a[i] && b[i]) {
            fl = false;
            cout << 0 << endl;
            break;
        } else if (a[i] && !b[i]) {
            fl = false;
            cout << 0 << endl;
            break;
        }
    }

    if (fl && x == y) cout << 1 << endl;
    fl = true;
    for (int i = 0; i <= 63; i++) {
        if (a[i]) {
            if (!b[i]) {
                fl = false;
                cout << 0 << endl;
                break;
            }
        }
    }

    if (fl) {
        cout << 1 << endl;
    }

    cout << a[0] << endl;

    return 0;
}
