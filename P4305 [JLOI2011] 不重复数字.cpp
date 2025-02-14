#include <iostream>
#include <map>
#include <algorithm>
#include <cstring>
#include <cstdio>

using namespace std;

map<long long, bool> has_output;

int main()
{
    int t, n, tmp;
    cin >> t;
    // ios::sync_with_stdio(false);
    while (t--) {
        scanf("%d", &n);
        has_output.clear();
        for (int i = 1; i <= n; i++) {
            scanf("%d", &tmp);
            if (!has_output[tmp]) printf("%d ", tmp);
            has_output[tmp] = true;
        }
        cout << endl;
    }
    
    return 0;
}
