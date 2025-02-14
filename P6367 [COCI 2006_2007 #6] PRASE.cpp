#include <iostream>
#include <map>
#include <string>

using namespace std;

map<string, int> m;
int n, ans, tmp;
string name;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name;
        int k = i - m[name]; // 别人取的
        if (m[name] > k) {
            // 比别人多
            ans++; // 提醒
        }
        m[name]++;
    }

    cout << ans;
    
    return 0;
}
