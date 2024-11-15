#include <iostream>
#include <map>

using namespace std;

map<string, int> mp;

int main() {
    
    int n;
    cin >> n;
    
    while (n--) {
        string s;
        cin >> s;
        mp[s]++;
    }
    
    cout << 52 - mp.size() << endl;
    
    return 0;
}

