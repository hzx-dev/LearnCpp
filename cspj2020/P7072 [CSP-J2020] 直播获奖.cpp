#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int pm[1000005];

int main() {
    
    int n, w;
    cin >> n >> w;

    for (int i = 1; i <= n; i++) {
        int k;
        cin >> k;
        int rs = max(1, i * w / 100);
        pm[i] = k;
        // 调整
        for (int j = i; j > 1; j--) {
            if (pm[j] > pm[j - 1]) {
                swap(pm[j], pm[j - 1]);
            } else {
                break;
            }
        }
        cout << pm[rs] << ' ';
    }


    return 0;
}
