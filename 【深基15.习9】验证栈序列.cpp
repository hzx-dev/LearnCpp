#include <iostream>
#include <vector>
#include <stack>

using namespace std;

bool isPossiblePopSequence(const vector<int>& pushed, const vector<int>& popped) {
    stack<int> s;
    int popIndex = 0;
    for (int num : pushed) {
        s.push(num);
        while (!s.empty() && popIndex < popped.size() && s.top() == popped[popIndex]) {
            s.pop();
            popIndex++;
        }
    }
    return popIndex == popped.size();
}

int main() {
    int q;
    cin >> q;
    vector<string> results;

    for (int i = 0; i < q; ++i) {
        int n;
        cin >> n;
        vector<int> pushed(n);
        vector<int> popped(n);

        for (int j = 0; j < n; ++j) {
            cin >> pushed[j];
        }

        for (int j = 0; j < n; ++j) {
            cin >> popped[j];
        }

        if (isPossiblePopSequence(pushed, popped)) {
            results.push_back("Yes");
        } else {
            results.push_back("No");
        }
    }

    for (const string& result : results) {
        cout << result << endl;
    }

    return 0;
}
