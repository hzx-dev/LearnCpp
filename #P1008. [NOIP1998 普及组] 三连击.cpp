#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    for (int i = 111; i <= 999; i++) {
        string s = to_string(i);
        if (s.find('0') != string::npos) continue;
        int b = i * 2;
        string sb = to_string(b);
        if (sb.find('0') != string::npos ||
            b >= 1000) continue;
        int c = i * 3;
        string sc = to_string(c);
        if (sc.find('0') != string::npos ||
            c >= 1000) continue;
        string d = s + sb + sc;
        map<char, int> chkdic = {
            {'0', 0},
            {'1', 0},
            {'2', 0},
            {'3', 0},
            {'4', 0},
            {'5', 0},
            {'6', 0},
            {'7', 0},
            {'8', 0},
            {'9', 0}
        };
        bool flag = true;
        for (char ch : d) {
            chkdic[ch]++;
            if (chkdic[ch] > 1) {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << i << " " << b << " " << c << endl;
    }
    
    return 0;
}
