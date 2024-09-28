// This is the solution of the problem "珠心算测验" in NOIP2014T1.

#include <iostream>

using namespace std;

int countList[114514] = {0};

int main() {
    int n, count = 0;

    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        int current = a[i];
        for (int j = 0; j < n; j++) for (int k = j + 1; k < n; k++) 
                            if (a[j] != a[k] && a[j] + a[k] == current) countList[current]++;
    }

    for (int i = 0; i < 114514; i++) if (countList[i]) count++;

    cout << count << endl;

    return 0;
}
