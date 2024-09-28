#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n, pos[1];

    cin >> n;

    int magicCube[n][n] {0};

    magicCube[0][n / 2 + 1] = 1
    pos = {0, ceil(n / 2)};

    for (int k=2; k <= n * n; k++) {
        if (pos[0] == 0 && pos[0] != n - 1) {
            magicCube[n - 1][pos[1] + 1] = k;
            pos = {n - 1, pos[1] + 1};
        }
        else if (pos[1] == n - 1 && pos[0] != 0) {
            magicCube[pos[0] - 1][0] = k;
            pos = {pos[0] - 1, 0};
        }
        else if (pos[0] == 0 && pos[1] == n - 1) {
            magicCube[pos[0], pos[1] + 1] = k;
            pos = {pos[0], pos[1] + 1};
        }
        else if (pos[0] != 0 && pos[1] != n - 1) {
            if (magicCube[pos[0] - 1][pos[1] + 1] == 0) {
                magicCube[pos[0] - 1][pos[1] + 1] = k;
                pos = {pos[0] - 1, pos[1] + 1};
            }
            else {
                magicCube[pos[0] + 1][pos[1]] = k;
                pos = {pos[0] + 1, pos[1]};
            }
        }
    }

    return 0;
}