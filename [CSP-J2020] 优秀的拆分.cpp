#include <iostream>
#include <cmath>

using namespace std;

int alls[26] = {0, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432};

// int split(int n) {
//     for (int i = 0; i < 25; i++) {
//         if (alls[i] > n) {
//             return alls[i-1];
//         }
//     }
// }

int main()
{
    int n;

    cin >> n;

    if (n % 2 != 0) {
        cout << "-1";
        return 0;
    } else if (!(n & n - 1)) {
        cout << n;
        return 0;
    } else {
        for (int i = 25; i >= 1; i--) {
            if (n >= alls[i]) {
                n -= alls[i];
                cout << alls[i] << " ";
            }
            if (n == 0) return 0;
        }
    }
    
    return 0;
}
