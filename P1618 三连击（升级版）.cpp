#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{   
    int k, j, g, n = 0;
    cin >> k >> j >> g;
    for (int i = 111; i <= 999; i++) {
        if((int)j != j||(int)g != g || g > 987) continue;//如果b和c是小数或者c超过987了那就下一个，c>987的话直接break掉也行

        string s = to_string(i);
        if (s.find('0') != string::npos) continue;
        int b = i * (j / k);
        string sb = to_string(b);
        if (sb.find('0') != string::npos ||
            b >= 1000) continue;
        int c = i * (g / k);
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
        if (flag) {
            cout << i << " " << b << " " << c << endl;
            n++;
        }
    }

    if (n == 0) {
        cout << "No!!!" << endl;
    }
    
    return 0;
}