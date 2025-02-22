#include <iostream>
#include <string>

using namespace std;

char yuanyin[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

string s;

bool check(char c) {
    for (char it : yuanyin) {
        if (c == it) return true;
    }
    return false;
} 

int main() {
    while (cin >> s) {
        int outputed = false;
        for (int i = 0; i < s.size(); i++) {
            if (!check(s[i])) {
                cout << s[i];
                outputed = true;
            }
        }
        if (!outputed) {
            cout << s;
        }
        cout << ' ';
    }

    return 0;
}
