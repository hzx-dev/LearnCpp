#include <iostream>
#include <map>

using namespace std;

map<int, bool> mp;

int main()
{
    int n, m;

    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        mp[i] = false;
    }

    for (int i = 0; i < m; i++) {
        int tmp;
        cin >> tmp;
        mp[tmp] = true;
    }
    
    for (int i = 1; i <= n; i++) { 
        if (mp[i] == false) {
            cout << i << endl;
        }
    }
    
    return 0;
}
