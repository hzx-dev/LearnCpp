#include <iostream>
#include <algorithm>

using namespace std;

int good[1000000];

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            for (int k = 1; k <= c; k++) {
                good[i + j + k]++;
            }
        }
    }
    
    cout << max_element(good, good + a + b + c) - good;

    return 0;
}
