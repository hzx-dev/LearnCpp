#include <iostream>
#include <map>

using namespace std;

map<int, int> mp;

int main()
{
    int n, m;

    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        int t;
        cin >> t;
        mp[i] = t;
    }
    
    for (int i = 1; i <= m; i++) {
        int s, b;
        cin >> s >> b;
        swap(mp[s], mp[b]);
    }

    for (int i = 1; i <= mp.size(); i++) {
        cout << mp[i] << " ";
    }

    return 0;
}
