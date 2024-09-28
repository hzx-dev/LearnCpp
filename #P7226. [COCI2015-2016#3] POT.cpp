#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    long long x = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int q;
        cin >> q;
        x += pow(q / 10, q % 10);
    }
    
    cout << x;

    return 0;
}
