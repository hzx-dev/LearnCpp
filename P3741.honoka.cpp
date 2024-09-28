#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string s;
    int vkCount = 0, maxCount = -1;

    cin >> n >> s;

    if (n < 2) {
        cout << 0 << endl;
        return 0;
    }

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'V' and s[i + 1] == 'K') {
            vkCount++;
        }
    }

    for (int i = 0; i < n - 1; i++) {
        if (s[i + 1] == 'K') {
            int tmpCount = 0;
            char raw = s[i];
            s[i] = 'V';
            for (int i = 0; i < n - 1; i++) {
                if (s[i] == 'V' and s[i + 1] == 'K') {
                    tmpCount++;
                }
            }
            if (tmpCount > maxCount) {
                maxCount = tmpCount;
                s[i] = raw; // discard changes
            }
            else s[i] = raw; // discard changes
        }
        else if (s[i] == 'V') {
            int tmpCount = 0;
            char raw = s[i + 1];
            s[i + 1] = 'K';
            for (int i = 0; i < n - 1; i++) {
                if (s[i] == 'V' and s[i + 1] == 'K') {
                    tmpCount++;
                }
            }
            if (tmpCount > maxCount) {
                maxCount = tmpCount;
                s[i + 1] = raw; // discard changes
            }
            else s[i + 1] = raw; // discard changes
        }
    }

    vkCount = maxCount; // update vkCount with maxCount

    if (vkCount <= 0) {
        cout << 0 << endl;
        return 0;
    }

    cout << vkCount << endl;
    // cout << s << endl;
    
    return 0;
}
