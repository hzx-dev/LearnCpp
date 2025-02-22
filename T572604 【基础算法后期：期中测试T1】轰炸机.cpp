#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

long long n, a[100005], zidan, ans;

int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int tmp;
        cin >> tmp;
        zidan += ceil(tmp / (double)100.0);
    }

    // cout << zidan << endl;

    cout << (long long)(ceil(zidan / (double)3.0));

    return 0;
}
