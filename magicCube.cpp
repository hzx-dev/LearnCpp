#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main(){

    int n, pos[2];

    cin >> n;

    int magicCube[n][n];
    memset(magicCube, 0, sizeof(magicCube));

    magicCube[0][n / 2] = 1;
    pos[0] = 0;
    pos[1] = n / 2;

    for (int k=2; k <= n * n; k++) {
        if (pos[0] == 0 && pos[1] != n - 1) {
            magicCube[n - 1][pos[1] + 1] = k;
            pos[0] = n - 1;
            pos[1] = pos[1] + 1;
        }
        else if (pos[1] == n - 1 && pos[0] != 0) {
            magicCube[pos[0] - 1][0] = k;
            pos[0] = pos[0] - 1;
            pos[1] = 0;
        }
        else if (pos[0] == 0 && pos[1] == n - 1) {
            magicCube[pos[0] + 1][pos[1]] = k;
            
            pos[0] = pos[0] + 1;
        }
        else if (pos[0] != 0 && pos[1] != n - 1) {
            if (magicCube[pos[0] - 1][pos[1] + 1] == 0) {
                magicCube[pos[0] - 1][pos[1] + 1] = k;
                pos[1] = pos[1] + 1;
                pos[0] = pos[0] - 1;
            }
            else {
                magicCube[pos[0] + 1][pos[1]] = k;
                pos[0] = pos[0] + 1;
            }
        }
    }

    // output the magic cube

    for (int i=0; i < n; i++) {
        for (int j=0; j < n; j++) {
            cout << magicCube[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}