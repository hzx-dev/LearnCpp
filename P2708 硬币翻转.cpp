#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();

    int ans = 0;

    for (int i = n - 1; i > 0; i--) {
        if (s[i] == '0' && s[i - 1] == '1') {
            ans += 2;
        }
    }

    if (s[0] == '0') ans++;

    cout << ans << endl;
    
    return 0;
}
