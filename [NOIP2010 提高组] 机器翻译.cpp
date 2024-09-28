#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int m, n, cnt = 0;

    cin >> m >> n;

    vector<int> a;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        bool inMem = false;
        for (int j = 0; j < a.size(); j++) {
            if (x == a[j]) { // 找到
                inMem = true;
                break;
            }
        }
        if (!inMem) { // 不在内存中
            if (a.size() >= m) { // 内存已满
                // cout << "Delete " << a[0] << endl;
                a.erase(a.begin()); // 弹出第一个
            }
            a.push_back(x);
            // cout << "Add " << x << endl;
            cnt++;
        }
    }

    cout << cnt << endl;
    
    return 0;
}
