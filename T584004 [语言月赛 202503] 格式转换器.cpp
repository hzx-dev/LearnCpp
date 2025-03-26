#include <iostream>

using namespace std;

// 235260

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int tmp;
        cin >> tmp;
        if (i == 1) cout << tmp;
        else cout << ',' << tmp;
    }
    
    return 0;
}
