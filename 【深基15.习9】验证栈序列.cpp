#include <iostream>
#include <vector>
#include <stack>

using namespace std;

bool check(const vector<int>& push, const vector<int>& pop) {
    stack<int> s;
    int k = 0;
    for (int num : push) {
        s.push(num);
        while (!s.empty() && k < pop.size() && s.top() == pop[k]) {
            s.pop();
            k++;
        }
    }
    return k == pop.size();
}

int main() {
    int q;
    cin >> q;
    vector<string> results;

    for (int i = 0; i < q; ++i) {
        int n;
        cin >> n;
        vector<int> p(n);
        vector<int> p2(n);

        for (int j = 0; j < n; ++j) {
            cin >> p[j];
        }

        for (int j = 0; j < n; ++j) {
            cin >> p2[j];
        }

        if (check(p, p2)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
