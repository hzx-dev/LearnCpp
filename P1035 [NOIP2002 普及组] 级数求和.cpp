#include <iostream>

using namespace std;

int main()
{
    int k;
    cin >> k;
    int n = 1;
    double s = 0;

    while (s <= k) {
        s += 1.0000000 / n;
        // cout << s << endl;
        n++;
    }

    cout << n - 1 << endl;
    
    return 0;
}
