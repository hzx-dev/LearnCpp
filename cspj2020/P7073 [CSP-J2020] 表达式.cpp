#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int na[1000005];
string s;

stack<int> nums;

int doCalc() {
    while (!nums.empty()) nums.pop();

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'x') {
            // 变量
            int x;
            i++;
            while (s[i] != ' ') {
                x = x * 10 + s[i] - '0';
                i++;
            }
            nums.push(na[x]);
            x = 0;
        } else if (s[i] == '&') {
            int a = nums.top();
            nums.pop();
            int b = nums.top();
            nums.pop();
            nums.push(a & b);
        } else if (s[i] == '|') {
            int a = nums.top();
            nums.pop();
            int b = nums.top();
            nums.pop();
            nums.push(a | b);
        } else if (s[i] == '!') {
            int a = nums.top();
            nums.pop();
            nums.push(!a);
        }
    }

    cout << nums.top() << endl;

    return 0;
}

int main() {
    getline(cin, s);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> na[i];
    }

    int q;

    cin >> q;

    while (q--) {
        // q次询问
        int t;
        cin >> t;
        na[t] = !na[t];
        doCalc();
        na[t] = !na[t];

    }

    return 0;
}
