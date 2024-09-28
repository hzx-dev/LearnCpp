#include <iostream>

using namespace std;

int main()
{
    int x, y, z, q;

    cin >> x >> y >> z >> q;

    int sum = x * 2 + y * 5 + z * 3;

    if (sum <= q) {
        cout << "Yes" << endl << q - sum << endl;
    }
    else cout << "No" << endl << sum - q << endl;
    
    return 0;
}
