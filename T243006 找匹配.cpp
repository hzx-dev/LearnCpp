#include <iostream>
#include <map>

using namespace std;

long long n, z, f[200005], ans;
map<long long, long long> mp;

int main()
{
    cin >> n >> z;

    for (int i = 1; i <= n; i++) {
        cin >> f[i];
        mp[f[i]]++;
    }
    
    for (int i = 1; i <= n; i++) {
        if (mp.find(f[i] + z) != mp.end()) {
            ans += mp[f[i] + z];
        }
    }

    cout << ans << endl;

    return 0;
}
