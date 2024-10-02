#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int r = pow(a, b);
    if (r > 1000000000 || r < 0) {
        r = -1;
    }

    cout << r;
    
    return 0;
}
