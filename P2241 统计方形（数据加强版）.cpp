#include <iostream>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;
    long long SquareCount = 0;
    long long RectangleCount = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            SquareCount += min(i, j);
            RectangleCount += i * j;
        }
    }

    cout << SquareCount << " " << RectangleCount - SquareCount;

    return 0;
}
