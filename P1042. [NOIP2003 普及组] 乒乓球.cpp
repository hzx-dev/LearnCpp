#include <iostream>
#include <vector>

using namespace std;

int main()
{
    char c;
    vector<char> v;
    v.push_back('0');

    while (cin >> c) {
        if (c == 'E') break;
        v.push_back(c);
    }

    // 11分制
    int w = 0, l = 0;

    // for (auto i : v) {
    //     cout << i << " ";
    // }

    for (int i = 1; i <= v.size(); i++) {
        if (v[i] == 'W') w++;
        else if (v[i] == 'L') l++;
        // cout << v[i] << endl;
        if ((l >= 11 || w >= 11) && abs(l - w) >= 2) {
            cout << w << ":" << l << endl;
            w = 0, l = 0;
        }
    }
    
    cout << w << ":" << l << endl << endl;

    // 21分制
    w = 0, l = 0;

    for (int i = 1; i <= v.size(); i++) {
        if (v[i] == 'W') w++;
        else if (v[i] == 'L') l++;
        // cout << v[i] << endl;
        if ((l >= 21 || w >= 21) && abs(l - w) >= 2) {
            cout << w << ":" << l << endl;
            w = 0, l = 0;
        }
    }
    
    cout << w << ":" << l << endl;


    return 0;
}
