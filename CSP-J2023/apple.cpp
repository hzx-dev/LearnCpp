#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
//    freopen("apple.in", "r", stdin);
//    freopen("apple.out", "w", stdout);
    
    int n, pnd = 0, d = 1;
    bool flag = true;
    cin >> n;
    
    while (n > 1) {

        if (n % 3 == 1 && flag) {
            pnd = d;
            flag = false;
        }
//        cout << ceil(double(n) / 3) << "||" << n << " ";
        n -= ceil(double(n) / 3);
        d++;
    }
    if (pnd == 0) pnd = d;
    cout << d << " " << pnd;
    
    return 0;
}

