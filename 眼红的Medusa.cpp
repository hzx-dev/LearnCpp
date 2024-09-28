#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> ta(n);
    unordered_set<int> sca;

    for (int i = 0; i < n; ++i) {
        cin >> ta[i];
    }

    for (int i = 0; i < m; ++i) {
        int num;
        cin >> num;
        sca.insert(num);
    }

    vector<int> ba;
    for (int num : ta) {
        if (sca.count(num)) {
            ba.push_back(num);
        }
    }

    for (int num : ba) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}