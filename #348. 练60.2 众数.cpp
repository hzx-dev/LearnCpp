#include <iostream>
#include <map>

using namespace std;

map<int, int> cnt;

int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }

    int max_cnt = 0;
    int max_num = 0;

    for (auto i: cnt) {
        if (i.second > max_cnt) {
            max_cnt = i.second;
            max_num = i.first;
        }
    }

    cout << max_num << endl;
    
    return 0;
}
