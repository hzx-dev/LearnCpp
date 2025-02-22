#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

map< string, vector<int> > s;
bool arr[10005];
string tmp;

int main()
{
    int n, m;
    cin >> n;

    int k;
    for (int i = 1; i <= n; i++) {
        cin >> k;
        for (int j = 1; j <= k; j++) {
            cin >> tmp;
            s[tmp].push_back(i);
        }
    }

    cin >> m;

    while (m--) {
        cin >> tmp;
        memset(arr, 0, sizeof(arr));
        for (auto item : s[tmp]) {
            if (!arr[item]) cout << item << ' ';
            arr[item] = 1;
        }
        cout << endl;
    }

    return 0;
}
