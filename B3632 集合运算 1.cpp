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


    return 0;
}
