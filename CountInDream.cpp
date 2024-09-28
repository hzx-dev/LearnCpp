#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n, m;
    cin >> m >> n; 
    int count[10];
    memset(count, 0, sizeof(count));

    for (int i = m; i <= n; i++) {
        int num = i;
        while (num > 0) {
            count[num % 10]++;
            num /= 10;
        }
    }

    cout << count[0] << " " << count[1] << " " << count[2] << " " << count[3] << " " << count[4] << " " << count[5] << " " << count[6] << " " << count[7] << " " << count[8] << " " << count[9] << endl;

    return 0;

}