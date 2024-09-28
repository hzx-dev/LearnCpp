#include <iostream>

using namespace std;

int main()
{   

    // freopen("candy.in", "r", stdin);
    // freopen("candy.out", "w", stdout);
    int n, l, r;
    cin >> n >> l >> r;
    
    if (l / n == r / n) cout << r % n ;
    else cout << n - 1; // k = n - 1 时 k mod n 最大。
    
    return 0;
}
