#include <iostream>

using namespace std;

int lights[50] = {0};

int main() {
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        double a;
        int t;

        cin >> a >> t;

        for (int j = 1; j <= t; j++) {
            if (lights[int (j * a)] == 0) {
                lights[int (j * a)] = 1;
            }
            else {
                lights[int (j * a)] = 0;
            }
        }
    }

    for (int i = 0; i < 2000001; i++) if (lights[i] == 1) {cout << i << endl;break;}

    return 0;
}