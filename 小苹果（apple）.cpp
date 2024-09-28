#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, d = 1, k = 0;
    cin >> n;
    while (n) {
        if (k == 0 && n % 3 == 1) k = d;
        n -= ceil(n / 3.0);
        d++;
    }

    cout << --d << " " << k << endl;
    
    return 0;
}
