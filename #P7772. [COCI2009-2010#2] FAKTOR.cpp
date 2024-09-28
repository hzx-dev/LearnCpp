#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, i, n = 0;

    cin >> a >> i;

    while (ceil((double)n / a) < i) {
        n++;
    }

    cout << n;
    
    return 0;
}
