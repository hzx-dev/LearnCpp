#include <iostream>

using namespace std;

int main() {
    int q;
    cin >> q;
    string str;
    cin >> str;

    for (int i = 0; i < q; i++) {
        int n;
        cin >> n;
        string s;
        switch (n) {
            case 1:
                cin >> s;
                str += s;
                cout << str << endl;
                break;
            case 2:
                int a, b;
                cin >> a >> b;
                str = str.substr(a, b);
                cout << str << endl;
                break;
            case 3:
                cin >> a >> s;
                str.insert(a, s);
                cout << str << endl;
                break;
            case 4:
                cin >> s;
                if (str.find(s) != string::npos) {
                    cout << str.find(s) << endl;
                }
                else {
                    cout << -1 << endl;
                }
                break;
        }
    }
    
    return 0;
}